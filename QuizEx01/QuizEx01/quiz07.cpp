#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("***���Ϻ��� ������ �ﰢ�� �����***\n");
	printf("����(����) �Է� : ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("* ");
		}
						
		printf("\n");
	}

	printf("������ %d", n*n/2);
	return 0;
}