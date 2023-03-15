#include "../../inc/IObserver/StatisticsDisplay.hpp"


StatisticsDisplay::StatisticsDisplay(WeatherData & weatherData) : weatherData(weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [StatisticsDisplay] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	weatherData.registerObserver(this);
	this->maxTemp = 0.0f;
	this->minTemp = 200.0f;
	this->tempSum = 0.0f;
	this->numReadings = 0;
}

StatisticsDisplay::StatisticsDisplay(StatisticsDisplay const & rhs) : weatherData(rhs.weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [StatisticsDisplay] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->maxTemp = rhs.maxTemp;
	this->minTemp = rhs.minTemp;
	this->tempSum = rhs.tempSum;
	this->numReadings = rhs.numReadings;
}

StatisticsDisplay::~StatisticsDisplay(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [StatisticsDisplay] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

StatisticsDisplay & StatisticsDisplay::operator=(StatisticsDisplay const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [StatisticsDisplay] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~StatisticsDisplay();
		new (this) StatisticsDisplay(rhs);
	}
	return (*this);
}


void StatisticsDisplay::update(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [StatisticsDisplay] update called.\n" << COLOR_DEFAULT;
	#endif
	++this->numReadings;
	float temp = weatherData.getTemperature();
	this->tempSum += temp;

	if (temp > this->maxTemp)
		this->maxTemp = temp;
	if (temp < this->minTemp)
		this->minTemp = temp;

	this->display();
}

void StatisticsDisplay::display(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [StatisticsDisplay] display called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Avg/Max/Min temperature = " <<
				(this->tempSum / static_cast<float>(this->numReadings)) << "/" <<
				this->maxTemp << "/" <<
				this->minTemp << "\n";
}
