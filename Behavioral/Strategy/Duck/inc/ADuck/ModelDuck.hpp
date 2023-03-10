#pragma once
# include "ADuck.hpp"
# include "../IFlyBehavior/IFlyBehaviors.h"
# include "../IQuackBehavior/IQuackBehaviors.h"

class ModelDuck : public ADuck
{
	public:
		ModelDuck(void);
		ModelDuck(ModelDuck const & rhs);
		ModelDuck(ADuck const & rhs);
		~ModelDuck(void);

		ModelDuck & operator=(ModelDuck const & rhs);

		void	display(void) const;
		ADuck * clone(void) const;

	protected:

	private:

};
