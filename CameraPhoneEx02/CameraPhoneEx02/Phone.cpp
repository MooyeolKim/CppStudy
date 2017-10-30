#include <iostream>
#include "Phone.h"
using namespace std;

void Phone::CallUp(int number)
{
	cout << "Call up..." << number << endl;
}

void Phone::HangUp(void)
{
	cout << "Hang Up..." << endl;
}

void Phone::Photomail(int number)
{
	Photograph();
	CallUp(number);
}

