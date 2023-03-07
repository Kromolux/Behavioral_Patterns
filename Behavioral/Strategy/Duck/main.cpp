#include <iostream>

#include "ADuck.hpp"
#include "MallardDuck.hpp"


int	main(void)
{
	{
		ADuck *a;
		a = new MallardDuck;
		a->display();
		a->performFly();
		a->performQuack();
		delete a;
	}
	std::cout << "\n\n";
	{
		MallardDuck mDuck;
		mDuck.display();
		mDuck.performFly();
		mDuck.performQuack();
	}
	return (0);
}
