#include <stdio.h>

int main(void)
{
	int a[4][4], i, j, s=1;

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			a[i][j] = s++;
			if(j==3)
			{
				i++;
				for(j; j>=0; j--)
				{
					a[i][j] = s++;
				}
				break;
			}
		}
		
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	