#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("*****���簢�� �����*****\n");
	printf("�Ѻ��� ���� : ");
	scanf("%d", &n);

	i = 1;
	while(i<=n)
	{
		j = 1;
		while(j<=n)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}