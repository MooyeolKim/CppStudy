#include <stdio.h>

int main(void)
{
	int num;
	while(1)
	{
	printf("���� �Է� : ");
	scanf("%d", &num);

	if(num>0)
	{
		printf("����Դϴ�.\n");
	}
	else if(num<0)
	{
		printf("�����Դϴ�.\n");
	}
	else
		printf("0�Դϴ�.\n");
	}
	return 0;
}
