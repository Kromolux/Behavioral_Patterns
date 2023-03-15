#include "../../inc/IObserver/CurrentConditionsDisplay.hpp"

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData & weatherData) : weatherData(weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [CurrentConditionsDisplay] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	weatherData.registerObserver(this);
	this->temperature = 0.0;
	this->humidity = 0.0;
}

CurrentConditionsDisplay::CurrentConditionsDisplay(CurrentConditionsDisplay const & rhs) : weatherData(rhs.weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [CurrentConditionsDisplay] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->temperature = rhs.temperature;
	this->humidity = rhs.humidity;
}

CurrentConditionsDisplay::~CurrentConditionsDisplay(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [CurrentConditionsDisplay] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

CurrentConditionsDisplay & CurrentConditionsDisplay::operator=(CurrentConditionsDisplay const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [CurrentConditionsDisplay] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~CurrentConditionsDisplay();
		new (this) CurrentConditionsDisplay(rhs);
	}
	return (*this);
}


void CurrentConditionsDisplay::update(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [CurrentConditionsDisplay] update called.\n" << COLOR_DEFAULT;
	#endif
	this->temperature = weatherData.getTemperature();
	this->humidity = weatherData.getHumidity();
	this->display();
}

void CurrentConditionsDisplay::display(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [CurrentConditionsDisplay] display called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Current conditions: " << this->temperature << " F degrees and " << this->humidity << " % humidity\n";
}
