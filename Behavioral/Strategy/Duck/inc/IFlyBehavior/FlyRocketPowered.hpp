#pragma once
# include "IFlyBehavior.hpp"

class FlyRocketPowered: virtual public IFlyBehavior
{
	public:
		FlyRocketPowered(void);
		FlyRocketPowered(FlyRocketPowered const & rhs);
		~FlyRocketPowered(void);

		FlyRocketPowered & operator=(FlyRocketPowered const & rhs);
	
		void	fly(void) const;

	protected:

	private:

};
