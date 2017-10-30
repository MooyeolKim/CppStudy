#include <stdio.h>

int main(void)
{
	int F, C, index;

	for(C = 100, index = 1; C >= 0; C-=5, index++)
	{
		F = (9*C/5) + 32;
		printf("[%2d] ¼·¾¾ %3dµµ : È­¾¾ %3dµµ\n", index, C, F);
	}
	
	return 0;
}