#pragma once
# include "../IFlyBehavior/IFlyBehavior.hpp"
# include "../IQuackBehavior/IQuackBehavior.hpp"
# include "../colors.h"

class ADuck
{
	public:
		ADuck(void);
		ADuck(ADuck const & rhs);
		virtual ~ADuck(void);

		ADuck & operator=(ADuck const & rhs);

		virtual void display(void) const = 0;

		void	performFly(void);
		void	performQuack(void);
		
		void	setFlyBehavior(IFlyBehavior * flyBehavior);
		void	setQuackBehavior(IQuackBehavior * quackBehavior);

	protected:
		IFlyBehavior *flyBehavior;
		IQuackBehavior *quackBehavior;
	
	private:
};
