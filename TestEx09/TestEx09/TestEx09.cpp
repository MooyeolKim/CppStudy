#include <stdio.h>

int main(void)
{
	int a = 13;
	int b = 013;
	int c = 0x13;
	char ch = 66;

	printf("%d \n", a);
	printf("%o, %d \n", b, b);
	printf("%x, %d \n", c, c);
	printf("%c, %d \n", ch, ch);

	return 0;
}