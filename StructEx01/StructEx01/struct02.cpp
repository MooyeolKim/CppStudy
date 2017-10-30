#include <stdio.h>

struct Data
{
	char a;
	int b;
	float c;
};

int main(void)
{
	int i;
	Data x[5];
	
	x[0].a = 'A';
	x[0].b = 10;
	x[0].c = 10.5;
	
	for(i=0; i<5 ; i++)
	{
		x[i] = x[0];
		x[i].a += i;
		x[i].b += i;
		x[i].c += i;
		printf("%c %d %.1f\n", x[i].a, x[i].b, x[i].c);
	}

	return 0;
}