#pragma once
# include "IObserver.hpp"
# include "../IDisplayElement/IDisplayElement.hpp"
# include "../ISubject/WeatherData.hpp"

class StatisticsDisplay : virtual public IObserver, virtual public IDisplayElement
{
	public:
		StatisticsDisplay(WeatherData & weatherData);
		StatisticsDisplay(StatisticsDisplay const & rhs);
		~StatisticsDisplay(void);

		StatisticsDisplay & operator=(StatisticsDisplay const & rhs);

		// IObserver
		void update(void);

		// IDisplayElement
		void display(void);

	protected:

	private:
		StatisticsDisplay(void);
		WeatherData & weatherData;
		float maxTemp;
		float minTemp;
		float tempSum;
		int numReadings;

};
