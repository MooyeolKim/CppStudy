#include <stdio.h>

int main(void)
{
	int F, C, index;

	for(C = 100, index = 1; C >= 0; C-=5, index++)
	{
		F = (9*C/5) + 32;
		printf("[%2d] ���� %3d�� : ȭ�� %3d��\n", index, C, F);
	}
	
	return 0;
}