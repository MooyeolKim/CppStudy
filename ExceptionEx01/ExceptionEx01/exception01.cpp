//14.03.24
#include <stdio.h>

int square(int num);

int main(void)
{
	int result, input;

	printf("������ ����ϰ��� �ϴ� ���� �Է��ϼ��� : ");
	scanf("%d", &input);

	result = square(input);
	//if(result < 0)
		//printf("�Է� ���� ó���� �� �ִ� ������ �Ѿ����ϴ�. \n");
	//else
		printf("%d�� ������ %d�Դϴ�.\n", input, result);
	return 0;
}

int square(int num)
{
	//if(num > 46340 || num < -46340)
	//	return -1;
	//else
	//	return num*num;
	int result = num*num;
	return result;
}
