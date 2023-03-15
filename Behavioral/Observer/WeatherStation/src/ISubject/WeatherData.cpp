#include "../../inc/ISubject/WeatherData.hpp"

WeatherData::WeatherData(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [WeatherData] default constructor called.\n" << COLOR_DEFAULT;
	#endif

	this->temperature = 0.0;
	this->humidity = 0.0;
	this->pressure = 0.0;
}

WeatherData::WeatherData(WeatherData const & rhs) : observers(rhs.observers.begin(), rhs.observers.end())
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [WeatherData] copy constructor called.\n" << COLOR_DEFAULT;
	#endif

	this->temperature = rhs.temperature;
	this->humidity = rhs.humidity;
	this->pressure = rhs.pressure;
}

WeatherData::~WeatherData(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [WeatherData] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

WeatherData & WeatherData::operator=(WeatherData const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [WeatherData] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~WeatherData();
		new (this) WeatherData(rhs);
	}
	return (*this);
}

void WeatherData::registerObserver(IObserver * observer)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [WeatherData] registerObserver called.\n" << COLOR_DEFAULT;
	#endif
	this->observers.push_back(observer);
}

void WeatherData::removeObserver(IObserver * observer)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [WeatherData] removeObserver called.\n" << COLOR_DEFAULT;
	#endif
	this->observers.remove(observer);
}

void WeatherData::notifyObservers(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [WeatherData] notifyObservers called.\n" << COLOR_DEFAULT;
	#endif
	for (ObserverList::iterator it = this->observers.begin(); it != this->observers.end(); ++it)
		(*it)->update();
}

void WeatherData::measurementsChanged(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [WeatherData] measurementsChanged called.\n" << COLOR_DEFAULT;
	#endif
	this->notifyObservers();
}

void WeatherData::setMeasurements(float const & temperature, float const & humidity, float const & pressure)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [WeatherData] setMeasurements called.\n" << COLOR_DEFAULT;
	#endif
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	this->measurementsChanged();
}

float const & WeatherData::getTemperature(void) const
{
	return (this->temperature);
}

float const & WeatherData::getHumidity(void) const
{
	return (this->humidity);
}

float const & WeatherData::getPressure(void) const
{
	return (this->pressure);
}
