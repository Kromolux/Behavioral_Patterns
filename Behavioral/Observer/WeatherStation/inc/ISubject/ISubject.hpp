#pragma once
# include <iostream>
# include "../IObserver/IObserver.hpp"
# include "../colors.h"

class ISubject
{
	public:
		virtual ~ISubject(void) {}

		virtual void registerObserver(IObserver * observer) = 0;
		virtual void removeObserver(IObserver * observer) = 0;
		virtual void notifyObservers(void) = 0;

	protected:

	private:

};
