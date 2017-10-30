//마방진 만들기
#include <stdio.h>
#define NUM 3

int main(void)
{
	int i, j, a[NUM][NUM], k;

	i=0;
	j=NUM/2;

	printf("***마방진 만들기***\n");

	for(k=1; k<=NUM*NUM; k++)
	{
		a[i][j] = k;
		if(k%NUM==0)
		{
			i++;
			if(i==NUM) i=0;
		}

		else
		{
			i--;
			if(i==-1) i=NUM-1;

			j++;
			if(j==NUM) j=0;
		}
	}

	for(i=0; i<NUM; i++)
	{
		for(j=0; j<NUM; j++)
		{
			printf("%4d", a[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	return 0;
}