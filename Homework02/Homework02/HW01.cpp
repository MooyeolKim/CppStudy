//�Ǻ���ġ ����
#include <stdio.h>

int main(void)
{
	int n1 = 1, n2 = 1, n3, num, i;

	printf("������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	printf("%d %d ", n1, n2);

	for(i = 1; i <= num-2; i++)
	{
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}

	printf("\n");

	return 0;
}
