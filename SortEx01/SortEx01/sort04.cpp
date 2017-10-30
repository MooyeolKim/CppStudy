//버블정렬 오름차순

#include <stdio.h>

int main(void)
{
	int i, j, len, temp;
	int a[] = {50, 70, 20, 10, 30, 77, 90, 99, 100};

	len = sizeof(a)/sizeof(int);

	printf("버블정렬 전 : ");

	for(i=0; i<len; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	for(i=0; i<len-1; i++)
	{
		for(j=0; j<len-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
		printf("%4d회전 후 : ", i+1);
		for(j=0; j<len; j++)
		{
			if(j<=len-i-2)
				printf("%-4c", ' ');
			else
				printf("%-4d", a[j]);
		}
		printf("\n");
	}

	printf("버블정렬 후 : ");

	for(i=0; i<len; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	return 0;
}