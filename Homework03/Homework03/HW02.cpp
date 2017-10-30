#include <stdio.h>

int main(void)
{
	int i, j;

	for(i=0; i<=9; i++)
	{
		for(j=2; j<=9; j++)
		{
			if(i==0)
				printf("%4d´Ü%3c", j, ' ');
			
			if(i>=1)
				printf("%d*%d = %-2d|", j, i, j*i);
		}
		printf("\n");
	}

	return 0;
}