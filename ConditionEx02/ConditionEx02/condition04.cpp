#include <stdio.h>

int main(void)
{
	int month;

	do
	{
		printf("�� �Է�(1~12) : ");
		scanf("%d", &month);
		if(month < 1 || month > 12)
			printf("�߸� �Է� �ϼ̽��ϴ�.\n");

	}while(month < 1 || month > 12);

	printf("%d���� �ϼ��� ", month);

	switch(month)
	{
	case 2:
		printf("28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	default :
		printf("31");
		break;
	}
	
	printf("�� �Դϴ�.\n");

	return 0;
}