#include <stdio.h>

struct S1
{
	char c;
	short s;
	int i;
};

struct S2
{
	char c;
	int i;
	short s;
};

int main(void)
{
	struct S1 s1;
	S2 s2;	
	printf("s1�� ũ�� : %d\n", sizeof(s1));
	printf("s2�� ũ�� : %d\n", sizeof(s2));

	return 0;
}