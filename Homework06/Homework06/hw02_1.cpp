#include <stdio.h>
#define NUM 10

int main(void)
{
	int a[NUM], i, n;

	printf("***�迭 ���� �� ã��***\n");

	for(i=0 ; i<NUM ; i++)
	{
		printf("%d��° ���� �Է�", i+1);
		scanf("%d", &a[i]);
	}

	printf("\n");

	printf("ã����� ���ڸ� �Է� : ");
	scanf("%d", &n);

	for(i=0 ; i<NUM ; i++)
	{
		if(n == a[i])
		{
			printf("%d�� a[%d]�� �ֽ��ϴ�.\n", n, i);
			return 0;
		}
	}
	
	printf("%d�� a�迭�� �����ϴ�.\n", n);

	return 0;
}