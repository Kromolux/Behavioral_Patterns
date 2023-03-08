#include "../../inc/IQuackBehavior/Quack.hpp"

Quack::Quack(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Quack] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

Quack::Quack(Quack const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Quack] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	(void) rhs;
}

Quack::~Quack(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [Quack] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

Quack & Quack::operator=(Quack const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Quack] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~Quack();
		new (this) Quack(rhs);
	}
	return (*this);
}

void	Quack::quack(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Quack] quack called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "<< Quack Quack >>\n";
}
