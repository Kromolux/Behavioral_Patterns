#pragma once
#include "ABeverage.hpp"

class HouseBlend : public ABeverage
{
	public:
		HouseBlend(void);
		~HouseBlend(void);

		//std::string getDescription(void) const;
		double getCost(void) const;

};
