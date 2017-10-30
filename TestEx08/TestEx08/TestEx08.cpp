#include <stdio.h>

int main(void)
{
	int i = 0;
	double d = 0.0;
	short s = 0;
	char c = 0;
	long l = 0;
	float f = 0.0;

	printf("size of int : %d\n", sizeof(int));
	printf("size of i : %d\n", sizeof(i));
	printf("\n");

	printf("size of double : %d\n", sizeof(double));
	printf("size of d : %d\n", sizeof(d));
	printf("\n");

	printf("size of short : %d\n", sizeof(short));
	printf("size of s : %d\n", sizeof(s));
	printf("\n");

	printf("size of char : %d\n", sizeof(char));
	printf("size of c : %d\n", sizeof(c));
	printf("\n");

	printf("size of long : %d\n", sizeof(long));
	printf("size of l : %d\n", sizeof(l));
	printf("\n");

	printf("size of float : %d\n", sizeof(float));
	printf("size of f : %d\n", sizeof(f));

	return 0;
}