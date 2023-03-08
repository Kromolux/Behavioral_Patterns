#pragma once
# include "ADuck.hpp"
# include "../IFlyBehavior/IFlyBehaviors.h"
# include "../IQuackBehavior/IQuackBehaviors.h"

class MallardDuck : public ADuck
{
	public:
		MallardDuck(void);
		MallardDuck(MallardDuck const & rhs);
		~MallardDuck(void);

		MallardDuck & operator=(MallardDuck const & rhs);

		void	display(void) const;

	protected:

	private:

};
