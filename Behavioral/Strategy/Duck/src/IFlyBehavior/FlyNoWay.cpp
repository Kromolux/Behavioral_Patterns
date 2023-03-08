#include "../../inc/IFlyBehavior/FlyNoWay.hpp"

FlyNoWay::FlyNoWay(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyNoWay] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

FlyNoWay::FlyNoWay(FlyNoWay const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyNoWay] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	(void) rhs;
}

FlyNoWay::~FlyNoWay(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [FlyNoWay] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

FlyNoWay & FlyNoWay::operator=(FlyNoWay const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyNoWay] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~FlyNoWay();
		new (this) FlyNoWay(rhs);
	}
	return (*this);
}

void	FlyNoWay::fly(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [FlyNoWay] fly called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "I can't fly!\n";
}
