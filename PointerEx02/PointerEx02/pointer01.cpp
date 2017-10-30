//14.03.14
#include <stdio.h>

int main(void)
{
	printf("char의 크기\t : %d\n", sizeof(char));
	printf("short의 크기\t : %d\n", sizeof(short));
	printf("long의 크기\t : %d\n", sizeof(long));
	printf("int의 크기\t : %d\n", sizeof(int));
	printf("float의 크기\t : %d\n", sizeof(float));
	printf("double의 크기\t : %d\n", sizeof(double));
	
	printf("\n");

	printf("char형 포인터의 크기\t : %d\n", sizeof(char*));
	printf("short형 포인터의 크기\t : %d\n", sizeof(short*));
	printf("long형 포인터의 크기\t : %d\n", sizeof(long*));
	printf("int형 포인터의 크기\t : %d\n", sizeof(int*));
	printf("float형 포인터의 크기\t : %d\n", sizeof(float*));
	printf("double형 포인터의 크기\t : %d\n", sizeof(double*));

	return 0;
}