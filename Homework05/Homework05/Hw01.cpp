#include <stdio.h>
#define SPT 3

int main(void)
{
	int a[5][5], i, j, sum=0;
	
	printf("***�����Է±�***\n");
	//�Էº�
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j==0)
				printf("�л�%d�� ����", i+1); 
			else if(j==1)
				printf("�л�%d�� ����", i+1); 
			else
				printf("�л�%d�� ����", i+1); 
			printf("������ �Է��Ͻÿ�. ");
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}

	//�հ��, �����ʱ�ȭ
	for(i=0; i<5; i++)
	{
		a[i][SPT] = 0;
		a[i][4] = 1;
		for(j=0; j<3; j++)
		{
			a[i][SPT] += a[i][j];
		}
	}

	//���� ����
	for(i=0; i<5; i++)
	{
		
		for(j=i+1; j<5; j++)
		{		
			if(a[i][SPT] < a[j][SPT])
			{
				a[i][4] += 1;
			}
			else if(a[i][SPT] == a[j][SPT])
				continue;
			else
			{
				a[j][4] += 1;
			}
		}	
	}

	//��º�
	printf("\n\t����\t����\t����\t�հ�\t����\n");
	
	for(i=0; i<5; i++)
	{
		printf("�л�%3d\t", i+1);
		for(j=0; j<5; j++)
		{
			printf("%4d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	
