#pragma once

class IObserver
{
	public:
		virtual ~IObserver(void) {}

		virtual void update(void) = 0;

	protected:

	private:

};
