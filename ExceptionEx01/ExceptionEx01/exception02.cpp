#include <stdio.h>

int Divide(int dividend, int divider, int *result);

int main(void)
{
	int a, b, result;
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	if(Divide(a, b, &result))
	{
		printf("%d ������ %d�� %d �Դϴ�. \n", a, b, result);
	}
	else
		printf("�����⸦ �� �� �����ϴ�.\n");

	return 0;
}

int Divide(int dividend, int divider, int *result)
{
	if(divider==0)
		return 0;

	*result = dividend/divider;
	return 1;
}