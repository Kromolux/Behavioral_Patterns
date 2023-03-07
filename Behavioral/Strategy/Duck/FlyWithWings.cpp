#include "FlyWithWings.hpp"

FlyWithWings::FlyWithWings(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyWithWings] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

FlyWithWings::FlyWithWings(FlyWithWings const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyWithWings] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	(void) rhs;
}

FlyWithWings::~FlyWithWings(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [FlyWithWings] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

FlyWithWings & FlyWithWings::operator=(FlyWithWings const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyWithWings] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~FlyWithWings();
		new (this) FlyWithWings(rhs);
	}
	return (*this);
}

void	FlyWithWings::fly(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [FlyWithWings] fly called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "I'm flying with my wings!\n";
}
