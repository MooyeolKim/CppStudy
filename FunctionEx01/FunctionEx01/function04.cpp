//14.03.21
#include <stdio.h>
#define NUM 5

//�Լ� ����
void input(int data[]);
void sort(int data[]);
void output(int data[]);

int main(void)
{
	int data[NUM];

	input(data);
	sort(data);
	output(data);

	return 0;
}

//�Է� �Լ� ����
void input(int data[])
{
	int i;
	printf("���� %d���� �Է��ϼ���.\n", NUM);
	for(i=0 ; i<NUM ; i++)
	{
		printf("%d��° ���� : ", i+1);
		scanf("%d", &data[i]);
	}
}

//���� �Լ� ����
void sort(int data[])
{
	int i, j, temp;

	for(i=0 ; i<NUM-1 ; i++)
	{
		for(j=i+1 ; j<NUM ; j++)
		{
			if(data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

//��� �Լ� ����
void output(int data[])
{
	int i;

	printf("\n�Էµ� ���ڸ� ũ�� ������ �����մϴ�.\n");
	for(i=0 ; i<NUM ; i++)
	{
		printf("%d��° ���� : %d\n", i+1, data[i]);
	}
}