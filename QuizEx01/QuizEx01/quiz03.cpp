//����� ���� ���ϱ�
#include <stdio.h>

int main(void)
{
	int n, cnt =0, i;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("\n***���***\n");
	printf("�Է��� ���� : %d\n", n);
	printf("��� : ");

	for(i = 1; i <= n; i++)
	{
		if(n%i == 0)
		{
			cnt++;
			printf("%d ", i);
		}		
	}
	
	printf("\n����� ���� : %d\n", cnt);

	return 0;
}