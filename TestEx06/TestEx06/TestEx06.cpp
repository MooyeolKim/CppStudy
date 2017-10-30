#include <stdio.h>

int main(void)
{
	int val;

	val = 1;
	printf("전위형 증가 : %d\n", ++val); 
	val = 1;
	printf("후위형 증가 : %d\n", val++);

	val = 1;
	printf("전위형 감소 : %d\n", --val);
	val = 1;
	printf("후위형 감소 : %d\n", val--);

	return 0;
}