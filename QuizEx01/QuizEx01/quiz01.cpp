//�ӽ� ���� temporary����ϱ�(swapping)
#include <stdio.h>

int main(void)
{
	int i, n1, n2, tmp, sum = 0;

	printf("ù ��° ���� �Է��Ͻÿ�. ");
	scanf("%d", &n1);
	printf("�� ��° ���� �Է��Ͻÿ�. ");
	scanf("%d", &n2);

	if(n1 > n2)
	{
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}

	for(i = n1; i <= n2; i++)
	{
		sum+=i;
		if(i < n2)
		{
			printf("%d + ", i);
		}
		else if(i == n2)
		{
			printf("%d = %d\n", n2, sum);
		}
	}
	
	printf("%d ~ %d������ �� : %d\n", n1, n2, sum);

	return 0;
}
