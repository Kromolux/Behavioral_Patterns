#pragma once
# include "IQuackBehavior.hpp"

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
