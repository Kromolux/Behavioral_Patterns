#pragma once
# include "IQuackBehavior.hpp"
# include "colors.h"

class Squeak: virtual public IQuackBehavior
{
	public:
		Squeak(void);
		Squeak(Squeak const & rhs);
		~Squeak(void);

		Squeak & operator=(Squeak const & rhs);
	
		void	quack(void) const;

	protected:

	private:

};
