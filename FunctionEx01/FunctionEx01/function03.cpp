#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);
void func4(void);

int main(void)
{
	func1();
	func2();
	func3();
	printf("main �Լ� ����\n");

	return 0;
}

void func1(void)
{
	func4();
	printf("func1 �Լ� ����\n");
}

void func2(void)
{
	printf("func2 �Լ� ����\n");
}

void func3(void)
{
	printf("func3 �Լ� ����\n");
}

void func4(void)
{
	printf("func4 �Լ� ����\n");
}