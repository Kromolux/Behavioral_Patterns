#pragma once
#include "ABeverage.hpp"

class DarkRoast : public ABeverage
{
	public:
		DarkRoast(void);
		~DarkRoast(void);

		//std::string getDescription(void) const;
		double getCost(void) const;

};
