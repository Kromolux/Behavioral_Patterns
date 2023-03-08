#include "../../inc/IFlyBehavior/FlyRocketPowered.hpp"

FlyRocketPowered::FlyRocketPowered(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyRocketPowered] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

FlyRocketPowered::FlyRocketPowered(FlyRocketPowered const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyRocketPowered] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	(void) rhs;
}

FlyRocketPowered::~FlyRocketPowered(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [FlyRocketPowered] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

FlyRocketPowered & FlyRocketPowered::operator=(FlyRocketPowered const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [FlyRocketPowered] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~FlyRocketPowered();
		new (this) FlyRocketPowered(rhs);
	}
	return (*this);
}

void	FlyRocketPowered::fly(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [FlyRocketPowered] fly called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "I'm flying with a rocket!\n";
}
