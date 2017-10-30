//14.03.24
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
	int result;
	int (*calc)(int, int);

	calc = add;
	result = calc(20, 10);
	printf("Calc result : %d\n", result);

	calc = sub;
	result = calc(20, 10);
	printf("Calc result : %d\n", result);

	calc = mul;
	result = calc(20, 10);
	printf("Calc result : %d\n", result);

	calc = div;
	result = calc(20, 10);
	printf("Calc result : %d\n", result);

	return 0;
}

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}