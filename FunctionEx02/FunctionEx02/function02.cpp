#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	int a=10, b=20;
	printf("함수 호출 전 a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("함수 호출 후 a=%d, b=%d\n", a, b);
	return 0;
}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("swap함수의 a=%d, b=%d\n", a, b);
}