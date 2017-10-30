#include <stdio.h>

int main(void)
{
	int i, j;

	i=2;
	do
	{
		j=1;
		do
		{
			printf("%d * %d = %d\n", i, j, i*j);
			j++;
		}while(j<=9);
		printf("\n");
		i++;

	}while(i<=9);

	return 0;
}