#include <iostream>
using namespace std;

void PrintDate(int year = 2000, int month=1, int day);

int main(void)
{
	PrintDate();
	PrintDate(2010);
	PrintDate(2010, 8);
	PrintDate(2010, 8, 5);
	
	return 0;
}

void PrintDate(int year, int month, int day)
{
	cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;
}

