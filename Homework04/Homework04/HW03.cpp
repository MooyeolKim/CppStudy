//���̵ �ﰢ�������
#include <stdio.h>

int main(void)
{
	int i, j, h;

	printf("**�� �̵ �ﰢ�� �����**\n");
	printf("���� : ");
	scanf("%d", &h);

	printf("�غ��� ���� : %d\n\n", 2*h-1);
	

	for(i=1; i<=h; i++)
	{
		for(j=1; j<=i-1; j++)
		{
			printf(" ");
		}
		
		for(j=1; j<=2*(h-i)+1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
		
	printf("\n�ﰢ���� ���� : %.2f\n", (double)(2*h-1)*h/2);

	return 0;
}
