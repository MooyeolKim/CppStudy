#include <stdio.h>

int main(void)
{
	double a = 3.0;
	double *b = NULL;
	b=&a;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(*b));

	return 0;
}