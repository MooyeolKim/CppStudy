#include <stdio.h>

int main(void)
{
	char *ptrChar = NULL;
	short *ptrShort = NULL;
	int *ptrInt = NULL;
	long *ptrLong = NULL;
	float *ptrFloat = NULL;
	double *ptrDouble = NULL;

	printf("char�� �������� ������ : %d\n", ++ptrChar);
	printf("short�� �������� ������ : %d\n", ++ptrShort);
	printf("int�� �������� ������ : %d\n", ++ptrInt);
	printf("long�� �������� ������ : %d\n", ++ptrLong);
	printf("float�� �������� ������ : %d\n", ++ptrFloat);
	printf("double�� �������� ������ : %d\n", ++ptrDouble);

	return 0;
}