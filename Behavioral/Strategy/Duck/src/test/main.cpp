#include <iostream>

#include "../../inc/ADuck/ADucks.h"

int	main(void)
{
	std::cout << COLOR_BLUE << "===> Testing abstract class ADuck\n" << COLOR_DEFAULT;
	{
		ADuck *a;
		a = new MallardDuck;
		a->display();
		a->performFly();
		a->performQuack();

		ADuck *b = a->clone();
		//b = a;
		delete a;

		b->display();
		b->performFly();
		b->performQuack();

		ADuck *c = new MallardDuck(b);
		delete b;

		c->display();
		c->performFly();
		c->performQuack();

		delete c;
	}
	/*
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
	*/
	return (0);
}
