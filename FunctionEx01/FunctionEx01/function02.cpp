#include <stdio.h>

double average(double, double);

int main(void)
{
	double result, val1=1, val2=2;
	result = average(val1, val2);
	printf("ЦђБе : %0.2f\n", result);
	return 0;
}

double average(double a, double b)
{
	double c= (a + b) / 2.0;
	return c;
}

