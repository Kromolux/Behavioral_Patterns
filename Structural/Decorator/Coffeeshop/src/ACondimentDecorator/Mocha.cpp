#include "../../inc/ACondimentDecorator/Mocha.hpp"

Mocha::Mocha(ABeverage *beverage)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Mocha] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->_beverage = beverage;
}


Mocha::~Mocha(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [Mocha] destructor called.\n" << COLOR_DEFAULT;
	#endif
	delete _beverage;
}

std::string Mocha::getDescription(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Mocha] getDescription called.\n" << COLOR_DEFAULT;
	#endif
	return (this->_beverage->getDescription() + ", Mocha");
}

double Mocha::getCost(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Mocha] getCost called.\n" << COLOR_DEFAULT;
	#endif
	return (this->_beverage->getCost() + 0.25);
}