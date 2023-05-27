#pragma once
# include "ACondimentDecorator.hpp"

class Mocha : public ACondimentDecorator
{
	public:
		Mocha(ABeverage *beverage);
		~Mocha(void);
	
		std::string getDescription(void) const;
		double getCost(void) const;
};
