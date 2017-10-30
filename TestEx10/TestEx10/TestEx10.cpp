#include <stdio.h>

int main(void)
{
	int a = 15, b= 28;
	int c = 4, d = 64;

	printf("%d \n", a&&b);
	printf("%d \n", a&b);
	printf("%d \n", a|b);
	printf("%d \n", a^b);
	printf("%d \n", ~a);
	printf("%d \n", c<<4);
	printf("%d \n", d>>3);

	return 0;
}