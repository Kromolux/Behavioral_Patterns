#include "../../inc/ACondimentDecorator/Milk.hpp"

Milk::Milk(ABeverage &beverage)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Milk] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->beverage = beverage;
}


Milk::~Milk(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [Milk] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

std::string Milk::getDescription(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Milk] getDescription called.\n" << COLOR_DEFAULT;
	#endif
	return (this->beverage.getDescription() + ", Milk");
}

double Milk::getCost(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Milk] getCost called.\n" << COLOR_DEFAULT;
	#endif
	return (this->beverage.getCost() + 0,5);
}