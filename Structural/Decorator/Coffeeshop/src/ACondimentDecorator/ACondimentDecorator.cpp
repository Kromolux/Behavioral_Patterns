#include "../../inc/ACondimentDecorator/ACondimentDecorator.hpp"

ACondimentDecorator::ACondimentDecorator(void) : _beverage(NULL)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ACondimentDecorator] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

ACondimentDecorator::~ACondimentDecorator(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [ACondimentDecorator] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

std::string ACondimentDecorator::getDescription(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ACondimentDecorator] getDescription called.\n" << COLOR_DEFAULT;
	#endif
	return (this->_beverage->getDescription());
}