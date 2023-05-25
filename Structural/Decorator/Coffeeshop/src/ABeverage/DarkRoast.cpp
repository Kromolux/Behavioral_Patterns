#include "../../inc/ABeverage/DarkRoast.hpp"

DarkRoast::DarkRoast(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [DarkRoast] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->description = "Dark Roast Coffee";
}

DarkRoast::~DarkRoast(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [DarkRoast] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

double DarkRoast::getCost(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [DarkRoast] getCost called.\n" << COLOR_DEFAULT;
	#endif
	return (1.99);
}
