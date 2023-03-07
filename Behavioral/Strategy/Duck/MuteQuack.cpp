#include "MuteQuack.hpp"

MuteQuack::MuteQuack(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MuteQuack] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

MuteQuack::MuteQuack(MuteQuack const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MuteQuack] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	(void) rhs;
}

MuteQuack::~MuteQuack(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [MuteQuack] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

MuteQuack & MuteQuack::operator=(MuteQuack const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MuteQuack] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~MuteQuack();
		new (this) MuteQuack(rhs);
	}
	return (*this);
}

void	MuteQuack::quack(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [MuteQuack] quack called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "<< Silence >>\n";
}
