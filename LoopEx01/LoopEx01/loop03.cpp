#include <stdio.h>

int main(void)
{
	int loop = 1;
	do
	{
		printf("%-2d Little Indian\n", loop);
		loop++;
	} while(loop <= 10);

	return 0;
}