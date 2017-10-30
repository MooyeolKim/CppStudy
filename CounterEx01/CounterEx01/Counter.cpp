#include "Counter.h"

Counter::Counter(void)
{
	count = 0;
}

void Counter::Reset(void)
{
	count = 0;
}

void Counter::Click(void)
{
	count++;
}

int Counter::GetCounter(void)
{
	return count;
}
