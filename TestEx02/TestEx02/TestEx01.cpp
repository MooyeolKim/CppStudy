#include <stdio.h>

int main(void)
{
	int radius = 10;
	double pi = 3.14;

	//printf("radius = %d, Pi = %f \n", radius, pi);

	printf("%d\n", radius);
	printf("%5d\n", radius);
	printf("%05d\n", radius);
	printf("%-5dA\n\n", radius);

	printf("%f\n", pi);
	printf("%0.2f\n", pi);
	printf("%6.2f\n", pi);
	
	return 0;
}