//14.04.10
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s0("c++ string");
	string s1(s0);
	string s2(s0, 1, 4);
	string s3(10, 'x');

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	return 0;
}