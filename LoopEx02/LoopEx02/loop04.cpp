#include <stdio.h>

int main(void)
{
	int i, j;

	i = 2;
	while(i<=9)
	{
		j = 1;
		while(j<=9)
		{
			printf("%d * %d = %d\n", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}

