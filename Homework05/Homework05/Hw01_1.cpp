#include <stdio.h>

int main(void)
{
	int a[5][5], i, j, sum, rank;
	
	printf("***�����Է±�***\n");
	//�Էº�
	for(i=0; i<5; i++)
	{
		sum = 0;
		printf("�л�%d : ", i+1); 
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		a[i][3] = sum;
		printf("\n");
	}

	//���� ����
	for(i=0; i<5; i++)
	{
		rank = 1;
		for(j=0; j<5; j++)
		{		
			if(a[i][3] < a[j][3]) //���������� ���� ����
				rank++;
		}
		a[i][4] = rank;
	}

	//��º�
	printf("\n\t����\t����\t����\t�հ�\t����\n");
	
	for(i=0; i<5; i++)
	{
		printf("�л�%-3d\t", i+1);
		for(j=0; j<5; j++)
		{
			printf("%4d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	
