#include <stdio.h>

int main(void)
{
	int a;
	int *ptr;

	a=10;

	ptr = &a; //�����Ϳ� a�� �ּҸ� �ִ´�.
	*ptr = 20; //����Ű�°�(a)�� ���� 20���� �ٲ۴�.

	printf("a : %d, *ptr : %d\n", a, *ptr);
	printf("&a : %d, ptr : %d\n", &a, ptr);

	return 0;
}