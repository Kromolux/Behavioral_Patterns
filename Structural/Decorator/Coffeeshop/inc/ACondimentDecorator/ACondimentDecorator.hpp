#pragma once
# include "../ABeverage/ABeverage.hpp"

class ACondimentDecorator : public ABeverage
{
	public:
		virtual std::string getDescription(void) const;

	protected:
		static ABeverage & beverage;
};
