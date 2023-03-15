#include "../../inc/IObserver/ForecastDisplay.hpp"


ForecastDisplay::ForecastDisplay(WeatherData & weatherData) : weatherData(weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ForecastDisplay] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	weatherData.registerObserver(this);
	this->currentPressure = 29.92f;
	this->lastPressure = 0;
}

ForecastDisplay::ForecastDisplay(ForecastDisplay const & rhs) : weatherData(rhs.weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ForecastDisplay] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->currentPressure = rhs.currentPressure;
	this->lastPressure = rhs.lastPressure;
}

ForecastDisplay::~ForecastDisplay(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [ForecastDisplay] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

ForecastDisplay & ForecastDisplay::operator=(ForecastDisplay const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ForecastDisplay] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~ForecastDisplay();
		new (this) ForecastDisplay(rhs);
	}
	return (*this);
}


void ForecastDisplay::update(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ForecastDisplay] update called.\n" << COLOR_DEFAULT;
	#endif
	this->lastPressure = this->currentPressure;
	this->currentPressure = weatherData.getPressure();
	this->display();
}

void ForecastDisplay::display(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ForecastDisplay] display called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Forecast: ";
	if (currentPressure > lastPressure)
		std::cout << "Improving weather on the way!\n";
	else if (currentPressure < lastPressure)
		std::cout << "Watch out for cooler, rainy weather.\n";
	else
		std::cout << "More of the same.\n";
}
