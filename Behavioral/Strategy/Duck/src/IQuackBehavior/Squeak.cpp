#include "../../inc/IQuackBehavior/Squeak.hpp"

Squeak::Squeak(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Squeak] default constructor called.\n" << COLOR_DEFAULT;
	#endif
}

Squeak::Squeak(Squeak const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Squeak] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	(void) rhs;
}

Squeak::~Squeak(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [Squeak] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

Squeak & Squeak::operator=(Squeak const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [Squeak] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~Squeak();
		new (this) Squeak(rhs);
	}
	return (*this);
}

void	Squeak::quack(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Squeak] quack called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "<< Squeak Squeak >>\n";
}

IQuackBehavior * Squeak::clone(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [Squeak] clone called.\n" << COLOR_DEFAULT;
	#endif
	return (new Squeak);
}
