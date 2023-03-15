#pragma once
# include "IObserver.hpp"
# include "../IDisplayElement/IDisplayElement.hpp"
# include "../ISubject/WeatherData.hpp"

class ForecastDisplay : virtual public IObserver, virtual public IDisplayElement
{
	public:
		ForecastDisplay(WeatherData & weatherData);
		ForecastDisplay(ForecastDisplay const & rhs);
		~ForecastDisplay(void);

		ForecastDisplay & operator=(ForecastDisplay const & rhs);

		// IObserver
		void update(void);

		// IDisplayElement
		void display(void);

	protected:

	private:
		ForecastDisplay(void);
		WeatherData & weatherData;
		float currentPressure;
		float lastPressure;

};
