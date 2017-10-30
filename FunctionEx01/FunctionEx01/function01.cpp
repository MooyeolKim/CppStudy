#include <stdio.h>

int Add(int x, int y)
{
	int z;
	z = x+y;
	return z;
}

int main(void)
{
	int a=10, b=20, c;
	
	c = Add(a, b);
	printf("ÇÕ°è : %d\n", c);

	return 0;
}