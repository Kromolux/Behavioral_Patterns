#pragma once
# include "IFlyBehavior.hpp"
# include "colors.h"

class FlyNoWay: virtual public IFlyBehavior
{
	public:
		FlyNoWay(void);
		FlyNoWay(FlyNoWay const & rhs);
		~FlyNoWay(void);

		FlyNoWay & operator=(FlyNoWay const & rhs);
	
		void	fly(void) const;

	protected:

	private:

};
