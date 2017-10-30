#include <stdio.h>

struct SBOX
{
	int s1;
	int s2;
	double s3;
};

union UBOX
{
	int u1;
	int u2;
	double u3;
};

int main(void)
{
	SBOX sbox;
	UBOX ubox;
	
	printf("%d %d %d\n", &sbox.s1, &sbox.s2, &sbox.s3);
	printf("%d %d %d\n", &ubox.u1, &ubox.u2, &ubox.u3);
	printf("%d\n", sizeof(sbox));
	printf("%d\n", sizeof(ubox));

	return 0;
}