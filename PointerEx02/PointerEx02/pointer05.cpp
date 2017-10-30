#include <stdio.h>

int main(void)
{
	char *ptrChar = NULL;
	short *ptrShort = NULL;
	int *ptrInt = NULL;
	long *ptrLong = NULL;
	float *ptrFloat = NULL;
	double *ptrDouble = NULL;

	printf("char형 포인터의 증가량 : %d\n", ++ptrChar);
	printf("short형 포인터의 증가량 : %d\n", ++ptrShort);
	printf("int형 포인터의 증가량 : %d\n", ++ptrInt);
	printf("long형 포인터의 증가량 : %d\n", ++ptrLong);
	printf("float형 포인터의 증가량 : %d\n", ++ptrFloat);
	printf("double형 포인터의 증가량 : %d\n", ++ptrDouble);

	return 0;
}