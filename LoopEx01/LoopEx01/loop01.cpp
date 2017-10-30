#include <stdio.h>

int main(void)
{
	int loop = 1;

	while(loop <= 10)
	{
		printf("%-2d Little Indian\n", loop);
		loop++;
	}

	return 0;
}