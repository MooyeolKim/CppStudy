//�������� ��������

#include <stdio.h>

int main(void)
{
	int i, j, temp, cnt;
	int a[] = {50, 70, 20, 10, 30, 88, 100, 45, 99, 132, 202, 66};

	printf("�������� �� : ");

	cnt = sizeof(a)/sizeof(int);

	for(i=0; i<cnt; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	for(i=0; i<cnt-1; i++)
	{
		for(j=i+1; j<cnt; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%4dȸ�� �� : ", i+1);
		for(j=0; j<=i; j++)
		{
			printf("%-4d", a[j]);
		}
		printf("\n");
	}

	printf("�������� �� : ");

	for(i=0; i<cnt; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	return 0;
}