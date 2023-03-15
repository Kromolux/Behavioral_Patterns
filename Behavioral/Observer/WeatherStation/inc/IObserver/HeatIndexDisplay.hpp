#pragma once
# include "IObserver.hpp"
# include "../IDisplayElement/IDisplayElement.hpp"
# include "../ISubject/WeatherData.hpp"

class HeatIndexDisplay : virtual public IObserver, virtual public IDisplayElement
{
	public:
		HeatIndexDisplay(WeatherData & weatherData);
		HeatIndexDisplay(HeatIndexDisplay const & rhs);
		~HeatIndexDisplay(void);

		HeatIndexDisplay & operator=(HeatIndexDisplay const & rhs);

		// IObserver
		void update(void);

		// IDisplayElement
		void display(void);

	protected:

	private:
		HeatIndexDisplay(void);
		WeatherData & weatherData;
		float heatIndex;

		float computeHeatIndex(float const & t, float const & rh) const;

};
