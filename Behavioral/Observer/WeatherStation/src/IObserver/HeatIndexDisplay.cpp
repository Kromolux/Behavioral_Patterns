#include "../../inc/IObserver/HeatIndexDisplay.hpp"


HeatIndexDisplay::HeatIndexDisplay(WeatherData & weatherData) : weatherData(weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [HeatIndexDisplay] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	weatherData.registerObserver(this);
	this->heatIndex = 0.0f;
}

HeatIndexDisplay::HeatIndexDisplay(HeatIndexDisplay const & rhs) : weatherData(rhs.weatherData)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [HeatIndexDisplay] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->heatIndex = rhs.heatIndex;

}

HeatIndexDisplay::~HeatIndexDisplay(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [HeatIndexDisplay] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

HeatIndexDisplay & HeatIndexDisplay::operator=(HeatIndexDisplay const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [HeatIndexDisplay] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~HeatIndexDisplay();
		new (this) HeatIndexDisplay(rhs);
	}
	return (*this);
}


void HeatIndexDisplay::update(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [HeatIndexDisplay] update called.\n" << COLOR_DEFAULT;
	#endif
	this->heatIndex = computeHeatIndex(weatherData.getTemperature(), weatherData.getHumidity());
	this->display();
}

void HeatIndexDisplay::display(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [HeatIndexDisplay] display called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Heat index is " << this->heatIndex << "\n";
}

float HeatIndexDisplay::computeHeatIndex(float const & t, float const & rh) const
{
	float index = (float) ((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) 
			+ (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) 
			+ (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
			(0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * 
			(rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) + 
			(0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
			0.000000000843296 * (t * t * rh * rh * rh)) -
			(0.0000000000481975 * (t * t * t * rh * rh * rh)));
	return (index);
}
