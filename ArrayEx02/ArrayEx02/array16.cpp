//마방진 만들기
#include <stdio.h>

int main(void)
{
	int i, j, a[5][5], k;

	i=0;
	j=5/2;

	printf("***마방진 만들기***\n");

	for(k=1; k<=25; k++)
	{
		a[i][j] = k;
		if(k%5==0)
		{
			i++;
			if(i==5) i=0;
		}

		else
		{
			i--;
			if(i==-1) i=4;

			j++;
			if(j==5) j=0;
		}
	}

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%4d", a[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	return 0;
}