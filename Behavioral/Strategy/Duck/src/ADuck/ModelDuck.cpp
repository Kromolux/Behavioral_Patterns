#include "../../inc/ADuck/ModelDuck.hpp"

ModelDuck::ModelDuck(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ModelDuck] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = new FlyNoWay();
	this->quackBehavior = new Quack();
}

ModelDuck::ModelDuck(ModelDuck const & rhs) : ADuck()
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ModelDuck] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = rhs.flyBehavior;
	this->quackBehavior = rhs.quackBehavior;
}

ModelDuck::~ModelDuck(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [ModelDuck] destructor called.\n" << COLOR_DEFAULT;
	#endif
	delete this->flyBehavior;
	delete this->quackBehavior;
}

ModelDuck & ModelDuck::operator=(ModelDuck const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ModelDuck] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		this->~ModelDuck();
		new (this) ModelDuck(rhs);
	}
	return (*this);
}

void	ModelDuck::display(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ModelDuck] display called.\n" << COLOR_DEFAULT;
	#endif
	std::cout << "I'm a model duck!\n";
}

ADuck * ModelDuck::clone(void) const
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ModelDuck] clone called.\n" << COLOR_DEFAULT;
	#endif
	return (new ModelDuck(*this));
}
