#include "../../inc/ABeverage/ABeverage.hpp"

ABeverage::ABeverage(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ABeverage] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

ABeverage::~ABeverage(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [ABeverage] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

std::string ABeverage::getDescription(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ABeverage] getDescription called.\n" << COLOR_DEFAULT;
	#endif
	return (this->description);
}
