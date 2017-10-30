#include <stdio.h>

int main(void)
{
	int F, C;
	
	for(C=0; C<=100; C+=5)
	{
		F = (9*C/5) + 32;
		printf("¼·¾¾ %3dµµ : È­¾¾ %3dµµ \n", C, F);
	}
	
	return 0;
}