#include <stdio.h>

int main(void)
{
	int i;

	for(i=1; i<=100; i++)
	{
		if(i%5>0)
			continue;

		printf("%d ", i);
	}

	printf("\n");

	return 0;
}