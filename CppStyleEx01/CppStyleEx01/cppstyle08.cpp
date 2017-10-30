#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int *ptr = &num;
	int &ref = num;
	ref++;

	printf("%d %d %d\n", num, *ptr, ref);

	return 0;
}
