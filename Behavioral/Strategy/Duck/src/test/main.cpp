#include <iostream>

#include "../../inc/ADuck/ADucks.h"

void	terminalPrint(char const * text)
{
	std::cout << COLOR_BLUE << "\n*** " << text << "\n" << COLOR_DEFAULT;
}

int	main(void)
{
	terminalPrint("Create concreate object ModelDuck as pointer to abstract ADuck *a");
	// ADuck duck; // will not compile -> error: cannot declare variable ‘duck’ to be of abstract type ‘ADuck’
	ADuck *a;
	a = new ModelDuck;
	terminalPrint("call object member functions from a");
	a->display();
	a->performFly();
	a->performQuack();

	terminalPrint("Copy object with copy constructor overload ADuck *b = new ModelDuck(*a)");
	ADuck *b = new ModelDuck(*a);

	terminalPrint("Change Behavior of object a");
	a->setFlyBehavior(new FlyRocketPowered);
	a->setQuackBehavior(new Squeak);

	terminalPrint("call object member functions from b");
	b->display();
	b->performFly();
	b->performQuack();
	terminalPrint("delete object b");
	delete b;

	terminalPrint("Clone abstract class ADuck b");
	b = &a->clone();
	// *b = *a; // will not compile -> ‘ADuck& ADuck::operator=(const ADuck&)’ is private within this context
	terminalPrint("delete object a");
	delete a;

	terminalPrint("call object member functions from b");
	b->display();
	b->performFly();
	b->performQuack();

	terminalPrint("Change Behavior of object b");
	b->setFlyBehavior(new FlyNoWay);
	b->setQuackBehavior(new MuteQuack);

	terminalPrint("call object member functions from b");
	b->display();
	b->performFly();
	b->performQuack();

	terminalPrint("Copy object with copy constructor overload ADuck *c = new ModelDuck(*b)");
	ADuck *c = new MallardDuck(*b);

	terminalPrint("delete object b");
	delete b;

	terminalPrint("call object member functions from c");
	c->display();
	c->performFly();
	c->performQuack();

	terminalPrint("Create concreate object ModelDuck as pointer to abstract ADuck *a");
	a = new ModelDuck;
	terminalPrint("delete object c");
	delete c;

	terminalPrint("delete object c");
	delete a;

	terminalPrint("Create concreate object MallardDuck as pointer to MallardDuck *mDuck");
	MallardDuck *mDuck = new MallardDuck;

	terminalPrint("Create copy from MallardDuck *cmDuck");
	MallardDuck *cmDuck = new MallardDuck(*mDuck);

	terminalPrint("Create new MallardDuck *otherDuck");
	MallardDuck *otherDuck = new MallardDuck;

	terminalPrint("Assign *otherDuck = *mDuck");
	*otherDuck = *mDuck;

	terminalPrint("call object member functions from mDuck");
	mDuck->display();
	mDuck->performFly();
	mDuck->performQuack();

	terminalPrint("delete object mDuck");
	delete mDuck;

	terminalPrint("call object member functions from cmDuck");
	cmDuck->display();
	cmDuck->performFly();
	cmDuck->performQuack();

	terminalPrint("delete object cmDuck");
	delete cmDuck;


	terminalPrint("call object member functions from otherDuck");
	otherDuck->display();
	otherDuck->performFly();
	otherDuck->performQuack();

	terminalPrint("delete object otherDuck");
	delete otherDuck;
	std::cout << "\n\n";
	{
		ModelDuck mDuck;
		terminalPrint("Create copy object");
		ModelDuck mmDuck(mDuck);
		mmDuck = mDuck;
		mDuck.setFlyBehavior(new FlyRocketPowered);
		mDuck.setQuackBehavior(new Squeak);

		mDuck.display();
		mDuck.performFly();
		mDuck.performQuack();
	std::cout << "\n\n";

		mmDuck.display();
		mmDuck.performFly();
		mmDuck.performQuack();
	}
	

	{
		MallardDuck *aDuck = new MallardDuck;
		MallardDuck *bDuck = new MallardDuck;
		//bDuck = aDuck;
		delete aDuck;
		bDuck->display();
		bDuck->performFly();
		bDuck->performQuack();
		delete bDuck;
	}
	return (0);
}
