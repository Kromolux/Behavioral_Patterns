#pragma once
# include "IQuackBehavior.hpp"
# include "colors.h"

class MuteQuack: virtual public IQuackBehavior
{
	public:
		MuteQuack(void);
		MuteQuack(MuteQuack const & rhs);
		~MuteQuack(void);

		MuteQuack & operator=(MuteQuack const & rhs);
	
		void	quack(void) const;

	protected:

	private:

};
