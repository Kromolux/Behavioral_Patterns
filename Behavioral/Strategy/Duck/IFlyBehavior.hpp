#pragma once
# include <iostream>

class IFlyBehavior
{
	public:
		virtual	~IFlyBehavior(void) {}
		virtual	void fly(void) const = 0;

	protected:

	private:

};
