#include <iostream>
using namespace std;

int main(void)
{
	char *str = new char[30];
	//char *str = (char *)malloc(sizeof(char)*30);
	strcpy(str, "Have a nice day ~ ^^");

	cout <<str <<endl;

	//free(str);
	delete[] str;	
	return 0;
}
