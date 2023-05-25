#pragma once
# include "../colors.h"
# include <iostream>

class ABeverage
{
	public:
		ABeverage(void);
		virtual ~ABeverage(void);

		std::string getDescription(void) const;
		virtual double getCost(void) const = 0;

	protected:
		std::string description;

};
