#include <stdio.h>

int main(void)
{
	int month;

	printf("�� ���� �¾�̽��ϱ�? ");
	scanf("%d", &month);

	printf("����� ź������ ");

	switch(month)
	{
	case 1:
		printf("������");
		break;
	case 2:
		printf("�ڼ���");
		break;
	case 3:
		printf("����Ƹ���");
		break;
	case 4:
		printf("���̾Ƹ��");
		break;
	case 5:
		printf("���޶���");
		break;
	case 6:
		printf("����");
		break;
	case 7:
		printf("���");
		break;
	case 8:
		printf("�丮��Ʈ");
		break;
	case 9:
		printf("�����̾�");
		break;
	case 10:
		printf("����");
		break;
	case 11:
		printf("������");
		break;
	case 12:
		printf("��Ű��");
		break;
	default:
		printf("¯��");
		break;
	}

	printf("�Դϴ�.\n");

	return 0;
}

