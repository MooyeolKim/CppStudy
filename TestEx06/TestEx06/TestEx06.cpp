#include <stdio.h>

int main(void)
{
	int val;

	val = 1;
	printf("������ ���� : %d\n", ++val); 
	val = 1;
	printf("������ ���� : %d\n", val++);

	val = 1;
	printf("������ ���� : %d\n", --val);
	val = 1;
	printf("������ ���� : %d\n", val--);

	return 0;
}