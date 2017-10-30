//14.04.01
#include <iostream>
#include "Counter.h"
using namespace std;

int main(void)
{
	Counter ct;
	ct.Reset();
	ct.Click();
	ct.Click();
	cout << ct.GetCounter() << endl;
	return 0;
}