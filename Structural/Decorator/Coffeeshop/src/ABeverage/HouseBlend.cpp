#include "../../inc/ABeverage/HouseBlend.hpp"

HouseBlend::HouseBlend(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [HouseBlend] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->_description = "House Blend Coffee";
}

HouseBlend::~HouseBlend(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [HouseBlend] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

double HouseBlend::getCost(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [HouseBlend] getCost called.\n" << COLOR_DEFAULT;
	#endif
	return (2.99);
}
