#include <stdio.h>

int main(void)
{
	int n, i, j, cnt=0;

	printf("1 ~ n���� �Ҽ� ���ϱ�\n");
	printf("n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("1 ~ %d���� �Ҽ� : ", n);

	for(i=2; i<=n; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i == j)
			{
				cnt++;
				printf("%d ", i);
			}
			if(i%j == 0)
				break;

		}
	}

	printf("\n�Ҽ��� ���� : %d��\n", cnt);

	return 0;
}