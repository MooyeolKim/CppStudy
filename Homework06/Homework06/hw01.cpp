#include <stdio.h>
#define NUM 10

int main(void)
{
	int a[NUM], i, max, min;

	printf("***�ִ밪 & �ּҰ� ã��***\n");

	for(i=0 ; i<NUM ; i++)
	{
		printf("%d�� ° ���� �Է� : ", i+1);
		scanf("%d", &a[i]);
	}

	//�ִ밪, �ּҰ� ����
	max = a[0];
	min = a[0];
	for(i=1 ; i<NUM ; i++)
	{
		if(max < a[i])
			max = a[i];
		
		if(min > a[i])
			min = a[i];
	}

	printf("\n�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
	printf("���̰� : %d\n", max-min);

	return 0;
}		