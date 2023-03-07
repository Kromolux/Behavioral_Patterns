#include "MallardDuck.hpp"

MallardDuck::MallardDuck(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MallardDuck] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = new FlyWithWings();
	this->quackBehavior = new Quack();
}

MallardDuck::MallardDuck(MallardDuck const & rhs) : ADuck()
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MallardDuck] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = rhs.flyBehavior;
	this->quackBehavior = rhs.quackBehavior;
}

MallardDuck::~MallardDuck(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [MallardDuck] destructor called.\n" << COLOR_DEFAULT;
	#endif
	delete this->flyBehavior;
	delete this->quackBehavior;
}

MallardDuck & MallardDuck::operator=(MallardDuck const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MallardDuck] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~MallardDuck();
		new (this) MallardDuck(rhs);
	}
	return (*this);
}

void	MallardDuck::display(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [MallardDuck] display called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "I'm a real Mallard duck!\n";
}
