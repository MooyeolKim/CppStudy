#include <stdio.h>

int main(void)
{
	int F, C;

	for(C = 100; C >= 0; C-=2)
	{
		F = (9*C/5) + 32;
		printf("���� %3d�� : ȭ�� %3d��\n", C, F);
	}
	
	return 0;
}