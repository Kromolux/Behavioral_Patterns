#pragma once
# include "IObserver.hpp"
//# include "../IDisplayElement/IDisplayElement.hpp"
# include "../ISubject/WeatherData.hpp"

class CurrentConditionsDisplay : virtual public IObserver//, virtual public IDisplayElement
{
	public:
		CurrentConditionsDisplay(WeatherData & weatherData);
		CurrentConditionsDisplay(CurrentConditionsDisplay const & rhs);
		~CurrentConditionsDisplay(void);

		CurrentConditionsDisplay & operator=(CurrentConditionsDisplay const & rhs);

		// IObserver
		void update(void);

		// IDisplayElement
		void display(void);

	protected:

	private:
		CurrentConditionsDisplay(void);
		WeatherData & weatherData;
		float temperature;
		float humidity;

};
