#include <stdio.h>

int main(void)
{
	int a[5] = {10, 20, 30, 40, 50}, i;
	int *ptr;

	ptr = a; //배열의 이름이 곧 주소이므로 &쓰지 않는다.

	*ptr = 100;
	*(ptr + 1) = 200;
	*(ptr + 2) = 300;
	*(ptr + 3) = 400;
	*(ptr + 4) = 500;

	printf("%d %d %d %d %d\n", *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4));
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	for(i=0 ; i<5 ; i++)
	{
		printf("%d ", *(ptr+i));
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%d ", ptr+i);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%d ", &a[i]);
	}
	printf("\n");

	printf("%d %d %d\n", a, ptr, &a[0]);

	return 0;
}