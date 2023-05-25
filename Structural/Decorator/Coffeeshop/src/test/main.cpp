#include <iostream>

#include "../../inc/ACondimentDecorator/ACondimentDecorator.hpp"
#include "../../inc/ABeverage/HouseBlend.hpp"

void	terminalPrint(char const * text)
{
	std::cout << COLOR_BLUE << "\n*** " << text << "\n" << COLOR_DEFAULT;
}

int	main(void)
{
	terminalPrint("Create simple object.");

	ABeverage *a = new HouseBlend;

	std::cout << a->getDescription() << " Price: " << a->getCost() << "\n";

	delete a;
	return (0);
}
