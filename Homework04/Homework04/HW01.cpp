//������ ã��
#include <stdio.h>

int main(void)
{
	int PN, i, j, sum, cnt=0, n;

	printf("n���� ������ ������ ã��\n");
	printf("n�� �Է� : ");
	scanf("%d", &n);
	
	printf("1 ~ %d���� ������ : ", n);

	for(i=2; i<=n; i++)
	{
		sum = 0;
		for(j=1; j<=i/2; j++)
		{
			if(i%j == 0)
				sum += j;
		}

		if(sum == i)
		{
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n�������� ������ %d\n", cnt);

	return 0;
}
