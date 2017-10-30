#include <stdio.h>

int main(void)
{
	int a;
	int *ptr;

	a=10;

	ptr = &a; //포인터에 a의 주소를 넣는다.
	*ptr = 20; //가르키는곳(a)의 값을 20으로 바꾼다.

	printf("a : %d, *ptr : %d\n", a, *ptr);
	printf("&a : %d, ptr : %d\n", &a, ptr);

	return 0;
}