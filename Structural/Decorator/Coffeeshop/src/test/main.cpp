#include <iostream>

#include "../../inc/ACondimentDecorator/ACondimentDecorator.hpp"
#include "../../inc/ACondimentDecorator/Milk.hpp"
#include "../../inc/ACondimentDecorator/Mocha.hpp"
#include "../../inc/ABeverage/HouseBlend.hpp"
#include "../../inc/ABeverage/DarkRoast.hpp"

void	terminalPrint(char const * text)
{
	std::cout << COLOR_BLUE << "\n*** " << text << "\n" << COLOR_DEFAULT;
}

int	main(void)
{
	terminalPrint("Create simple object.");
	ABeverage *a = new HouseBlend;
	terminalPrint("Call member functions.");
	std::cout << a->getDescription() << " Price: " << a->getCost() << "\n";
	delete a;


	terminalPrint("Create decorated object.");
	a = new Milk(new DarkRoast);
	terminalPrint("Call member functions.");
	std::cout << a->getDescription() << " Price: " << a->getCost() << "\n";
	delete a;


	terminalPrint("Create double decorated object.");
	a = new Mocha(new Milk(new DarkRoast));
	terminalPrint("Call member functions.");
	std::cout << a->getDescription() << " Price: " << a->getCost() << "\n";
	delete a;

	return (0);
}
