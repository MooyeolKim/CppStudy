#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str("My red balloon matches my red hat.");
	string red("red");
	string blue("blue");

	size_t found = str.rfind(red);
	while(found!=string::npos)
	{
		str.replace(found, red.length(), blue);
		found = str.rfind(red, found+1);
	}

	cout << str << endl;
	return 0;
}