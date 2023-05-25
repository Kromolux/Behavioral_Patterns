#pragma once
# include "ACondimentDecorator.hpp"

class Milk : public ACondimentDecorator
{
	public:
		Milk(ABeverage &beverage);
		~Milk(void);
	
		std::string getDescription(void) const;
		double getCost(void) const;
};
