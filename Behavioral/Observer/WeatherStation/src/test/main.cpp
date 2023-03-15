#include "../../inc/ISubject/WeatherData.hpp"
#include "../../inc/IObserver/CurrentConditionsDisplay.hpp"

int main(void)
{
	WeatherData dataSubject;

	IObserver * firstDisplay = new CurrentConditionsDisplay(dataSubject);
	dataSubject.registerObserver(firstDisplay);
	
	dataSubject.setMeasurements(80.0f, 65.0f, 30.4f);
	dataSubject.setMeasurements(82.0f, 70.0f, 29.2f);
	dataSubject.setMeasurements(78.0f, 90.0f, 29.2f);

	delete firstDisplay;
	return (0);
}
