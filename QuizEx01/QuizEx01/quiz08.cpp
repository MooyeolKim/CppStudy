#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("***�»��� ������ �ﰢ�� �����***\n");
	printf("����(����) �Է� : ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i+1; j++)
		{
			printf("* ");
		}
						
		printf("\n");
	}

	printf("������ %d\n", n*n/2);
	return 0;
}