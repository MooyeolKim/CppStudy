//14.03.20
#include <stdio.h>

enum Season {SPRING, SUMMER, FALL, WINTER};

int main(void)
{
	enum Season s = (Season)3; //c++���� ĳ���� �ؾ� ���������� �Է°���

	switch(s)
	{
	case SPRING:
		printf("��\n");
		break;

	case SUMMER:
		printf("����\n");
		break;
	case FALL:
		printf("����\n");
		break;
	case WINTER:
		printf("�ܿ�\n");
		break;
	}

	return 0;
}