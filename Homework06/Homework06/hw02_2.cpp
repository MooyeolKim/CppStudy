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

	do
	{
		printf("ã����� ���ڸ� �Է�(���� : 0) : ");
		scanf("%d", &n);

		if(n == 0)
			return 0;

		for(i=0 ; i<NUM ; i++)
		{ 
			if(n == a[i])
			{
				printf("%d�� a[%d]�� �ֽ��ϴ�.\n\n", n, i);
				break;
			}
		}

		if(i==NUM)
			printf("%d�� a�迭�� �����ϴ�.\n\n", n);
			
	}while(1);
	
	return 0;
}