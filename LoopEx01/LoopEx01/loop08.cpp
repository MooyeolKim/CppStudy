#include <stdio.h>

int main(void)
{
	int num;

	do
	{
		printf("1 - ���� ����\n");
		printf("2 - ���� ����\n");
		printf("3 - ���� �ݱ�\n");
		printf("1~3���� ��ȣ�� �Է��Ͻÿ�.");
		scanf("%d", &num);
	//}while(num<1 || num>3);
	}while(!(num>=1 && num<=3));
	
	printf("������ ��ȣ�� %d�Դϴ�\n", num);

	return 0;
}
