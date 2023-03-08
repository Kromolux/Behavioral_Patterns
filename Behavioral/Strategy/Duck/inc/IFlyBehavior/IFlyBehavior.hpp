#pragma once
# include <iostream>
# include "../colors.h"

class IFlyBehavior
{
	public:
		virtual	~IFlyBehavior(void) {}
		virtual	void fly(void) const = 0;
		virtual IFlyBehavior * clone(void) const = 0;

	protected:

	private:

};
