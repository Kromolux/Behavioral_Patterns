#pragma once
# include "IQuackBehavior.hpp"

class MuteQuack: virtual public IQuackBehavior
{
	public:
		MuteQuack(void);
		MuteQuack(MuteQuack const & rhs);
		~MuteQuack(void);

		MuteQuack & operator=(MuteQuack const & rhs);
	
		void	quack(void) const;
		IQuackBehavior * clone(void) const;

	protected:

	private:

};
