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
		printf("ã����� ���ڸ� �Է� : ");
		scanf("%d", &n);

		i=0;
		while(n == a[i] || i>NUM)
		{
			i++;
		}
		
		if(i>10)
			printf("%d�� a�迭�� �����ϴ�.\n\n", n);
		else
			printf("%d�� a[%d]�� �ֽ��ϴ�.\n\n", n, i);
	}while(n > 0);
	
	return 0;
}

	

