#pragma once
# include "../IFlyBehavior/IFlyBehavior.hpp"
# include "../IQuackBehavior/IQuackBehavior.hpp"
# include "../colors.h"

class ADuck
{
	public:
		ADuck(void);
		virtual ~ADuck(void);

		virtual void display(void) const = 0;
		virtual ADuck * clone(void) const = 0;

		void	performFly(void);
		void	performQuack(void);
		
		void	setFlyBehavior(IFlyBehavior * flyBehavior);
		void	setQuackBehavior(IQuackBehavior * quackBehavior);

		IFlyBehavior const & getFlyBehavior(void) const;
		IQuackBehavior const & getQuackBehavior(void) const;

	protected:
		IFlyBehavior *flyBehavior;
		IQuackBehavior *quackBehavior;
	
	private:
		// should be private, can't copy object instance from the abstract class itself!?
		ADuck(ADuck const & rhs);
		ADuck & operator=(ADuck const & rhs);
};
