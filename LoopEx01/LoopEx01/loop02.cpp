#include <stdio.h>

int main(void)
{
	int loop = 10;

	while(loop >= 1)
	{
		printf("%-2d Little Indian\n", 11-loop);
		loop--;
	}

	return 0;
}