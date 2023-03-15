#pragma once
# include "ISubject.hpp"
# include <list>

class WeatherData : virtual public ISubject
{
	public:
		typedef std::list<IObserver *> ObserverList;

		WeatherData(void);
		WeatherData(WeatherData const & rhs);
		~WeatherData(void);

		WeatherData & operator=(WeatherData const & rhs);

		// ISubject
		void registerObserver(IObserver * observer);
		void removeObserver(IObserver * observer);
		void notifyObservers(void);

		void measurementsChanged(void);
		void setMeasurements(float const & temperature, float const & humidity, float const & pressure);

		float const & getTemperature(void) const;
		float const & getHumidity(void) const;
		float const & getPressure(void) const;
		// maybe dataSet const & getData(void); that returns the data struct reference would be better?

	protected:

	private:
		ObserverList observers;

		// struct dataSet ???
		float	temperature;
		float	humidity;
		float	pressure;

};
