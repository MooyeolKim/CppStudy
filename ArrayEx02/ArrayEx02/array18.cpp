//������ �����
#include <stdio.h>

int main(void)
{
	int i, j, a[99][99], k, n;

	printf("Ȧ�� n �Է� : ");
	scanf("%d", &n);

	i=0;
	j=n/2;

	printf("***������ �����***\n");

	for(k=1; k<=n*n; k++)
	{
		a[i][j] = k;
		if(k%n==0)
		{
			i++;
			if(i==n) i=0;
		}

		else
		{
			i--;
			if(i==-1) i=n-1;

			j++;
			if(j==n) j=0;
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%4d", a[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	return 0;
}