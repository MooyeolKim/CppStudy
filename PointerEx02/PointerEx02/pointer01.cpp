//14.03.14
#include <stdio.h>

int main(void)
{
	printf("char�� ũ��\t : %d\n", sizeof(char));
	printf("short�� ũ��\t : %d\n", sizeof(short));
	printf("long�� ũ��\t : %d\n", sizeof(long));
	printf("int�� ũ��\t : %d\n", sizeof(int));
	printf("float�� ũ��\t : %d\n", sizeof(float));
	printf("double�� ũ��\t : %d\n", sizeof(double));
	
	printf("\n");

	printf("char�� �������� ũ��\t : %d\n", sizeof(char*));
	printf("short�� �������� ũ��\t : %d\n", sizeof(short*));
	printf("long�� �������� ũ��\t : %d\n", sizeof(long*));
	printf("int�� �������� ũ��\t : %d\n", sizeof(int*));
	printf("float�� �������� ũ��\t : %d\n", sizeof(float*));
	printf("double�� �������� ũ��\t : %d\n", sizeof(double*));

	return 0;
}