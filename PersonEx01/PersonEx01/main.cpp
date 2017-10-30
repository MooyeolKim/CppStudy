#include <iostream>
#include "Person.h"
using namespace std;

int main(void)
{
	Person tom(800828), bob(820213);
	
	cout << "tom's Id : " << tom.GetId() << endl;
	cout << "bob's Id : " << bob.GetId() << endl;

	return 0;
}
