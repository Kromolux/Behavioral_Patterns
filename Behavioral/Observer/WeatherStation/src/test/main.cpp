#include "../../inc/ISubject/WeatherData.hpp"
#include "../../inc/IObserver/CurrentConditionsDisplay.hpp"
#include "../../inc/IObserver/ForecastDisplay.hpp"
#include "../../inc/IObserver/StatisticsDisplay.hpp"
#include "../../inc/IObserver/HeatIndexDisplay.hpp"

int main(void)
{
	WeatherData dataSubject;

	IObserver * firstDisplay = new CurrentConditionsDisplay(dataSubject);
	IObserver * secondDisplay = new ForecastDisplay(dataSubject);
	IObserver * thirdDisplay = new StatisticsDisplay(dataSubject);
	IObserver * fourthDisplay = new HeatIndexDisplay(dataSubject);
	//dataSubject.registerObserver(firstDisplay); moved to IObserver constructor
	
	dataSubject.setMeasurements(80.0f, 65.0f, 30.4f);
	dataSubject.setMeasurements(82.0f, 70.0f, 29.2f);
	dataSubject.setMeasurements(78.0f, 90.0f, 29.2f);

	delete firstDisplay;
	delete secondDisplay;
	delete thirdDisplay;
	delete fourthDisplay;
	return (0);
}
