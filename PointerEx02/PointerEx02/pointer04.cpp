#include <stdio.h>

int main(void)
{
	int val = 100;
	int *ptr = NULL;
	ptr = &val;

	//�ּ� ���
	printf("%p\n", ptr); //16���� �ּ�
	printf("%p\n", &val);
	printf("%d\n", ptr); //10���� �ּ�
	printf("%d\n", &val);

	//������ ���
	printf("%d\n", *ptr); //����Ű�� ���� ��
	printf("%d\n", val);

	return 0;
}
