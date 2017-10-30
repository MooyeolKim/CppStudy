#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;
	double pi = 3.141592;
	double radian, sine;

	for(i=0 ; i<=360 ; i+=15)
	{
		radian = i*pi/180.0;
		sine = 20+(int)(20*sin(radian));
		for(j=0 ; j<sine ; j++)
			printf(" ");
		printf("*\n");
	}
	return 0;
}
	