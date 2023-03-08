#include <iostream>

#include "../../inc/ADuck/ADucks.h"

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
	std::cout << "\n\n";
	{
		ModelDuck mDuck;
		mDuck.display();
		mDuck.performFly();
		mDuck.performQuack();
	std::cout << "\n\n";
		mDuck.setFlyBehavior(new FlyRocketPowered);
		mDuck.setQuackBehavior(new Squeak);

		mDuck.display();
		mDuck.performFly();
		mDuck.performQuack();
	}
	return (0);
}
