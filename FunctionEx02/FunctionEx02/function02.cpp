#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	int a=10, b=20;
	printf("�Լ� ȣ�� �� a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("�Լ� ȣ�� �� a=%d, b=%d\n", a, b);
	return 0;
}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("swap�Լ��� a=%d, b=%d\n", a, b);
}