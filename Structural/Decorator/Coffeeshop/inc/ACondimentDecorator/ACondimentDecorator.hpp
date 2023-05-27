#pragma once
# include "../ABeverage/ABeverage.hpp"

class ACondimentDecorator : public ABeverage
{
	public:
		ACondimentDecorator(void);
		virtual ~ACondimentDecorator(void);
		virtual std::string getDescription(void) const = 0;
		virtual double getCost(void) const = 0;

	protected:
		ABeverage * _beverage;
};
