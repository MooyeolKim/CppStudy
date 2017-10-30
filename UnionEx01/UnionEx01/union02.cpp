#include <stdio.h>

union UBOX
{
	int u1;
	int u2;
	double u3;
};

int main(void)
{
	UBOX ubox;
	
	ubox.u1 = 20;
	printf("%d %d %0.2f\n", ubox.u1, ubox.u2, ubox.u3);

	ubox.u3 = 7.15;
	printf("%d %d %0.2f\n", ubox.u1, ubox.u2, ubox.u3);
	
	return 0;
}