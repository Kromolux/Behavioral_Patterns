#pragma once
# include <iostream>
# include "../colors.h"

class IQuackBehavior
{
	public:
		virtual	~IQuackBehavior(void) {}
		virtual	void quack(void) const = 0;

	protected:

	private:

};
