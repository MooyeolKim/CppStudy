//14.03.18
#include <stdio.h>

struct Data
{
	char a;
	int b;
	float c;
};

int main(void)
{
	Data x, y;

	x.a = 'A';
	x.b = 10;
	x.c = 10.5;
	y = x;
	y.a = 'B';

	printf("%c %d %.1f\n", x.a, x.b, x.c);
	printf("%c %d %.1f\n", y.a, y.b, y.c);

	return 0;
}