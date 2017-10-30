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
	printf("s1의 크기 : %d\n", sizeof(s1));
	printf("s2의 크기 : %d\n", sizeof(s2));

	return 0;
}