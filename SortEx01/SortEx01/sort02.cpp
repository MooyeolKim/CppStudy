//버블정렬 오름차순

#include <stdio.h>

int main(void)
{
	int i, j, k, temp;
	int a[5] = {50, 70, 20, 10, 30};

	printf("버블정렬 전 : ");

	for(i=0; i<5; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	for(i=0; i<4; i++)
	{
		for(j=0; j<4-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		printf("%4d회전 후 : ", i+1);
		for(j=0; j<5; j++)
		{
			if(j<=5-i)
				printf("%-4c", ' ');
			else
				printf("%-4d", a[j]);
		}
		printf("\n");
	}

	printf("버블정렬 후 : ");

	for(i=0; i<5; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	return 0;
}