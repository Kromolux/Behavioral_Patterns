#include "../../inc/ADuck/MallardDuck.hpp"

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
	this->flyBehavior = rhs.flyBehavior->clone();
	this->quackBehavior = rhs.quackBehavior->clone();
}

MallardDuck::MallardDuck(ADuck const * rhs)// : ADuck()
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MallardDuck] (overload ADuck *) copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = rhs->getFlyBehavior().clone();
	this->quackBehavior = rhs->getQuackBehavior().clone();
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

MallardDuck & MallardDuck::operator=(MallardDuck const * rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MallardDuck] (overload *) copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != rhs)
	{
		this->~MallardDuck();
		new (this) MallardDuck(rhs);
	}
	return (*this);
}

MallardDuck & MallardDuck::operator=(ADuck const * rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [MallardDuck] (overload ADuck *) copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != rhs)
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

ADuck * MallardDuck::clone(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [MallardDuck] clone called.\n" << COLOR_DEFAULT;
	#endif
	return (new MallardDuck(*this));
}
