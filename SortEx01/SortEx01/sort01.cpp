//�������� ��������

#include <stdio.h>

int main(void)
{
	int i, j, temp;
	int a[5] = {50, 70, 20, 10, 30};

	printf("�������� �� : ");

	for(i=0; i<5; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
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

	for(i=0; i<5; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");

	return 0;
}