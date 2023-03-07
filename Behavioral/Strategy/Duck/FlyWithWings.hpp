#pragma once
# include "IFlyBehavior.hpp"
# include "colors.h"

class FlyWithWings: virtual public IFlyBehavior
{
	public:
		FlyWithWings(void);
		FlyWithWings(FlyWithWings const & rhs);
		~FlyWithWings(void);

		FlyWithWings & operator=(FlyWithWings const & rhs);
	
		void	fly(void) const;

	protected:

	private:

};
