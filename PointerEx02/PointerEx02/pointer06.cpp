#include <stdio.h>

int main(void)
{
	short array[3];
	short *ptr = array;
	ptr[0] = 0;
	ptr[1] = 10;
	ptr[2] = 20;

	//�迭�� ������ ���� ���
	printf("�迭�� ���� ������ ���� : \t");
	printf("%d, %d, %d\n", array[0], array[1], array[2]);
	printf("�迭�� ���� ������ ����(������ ��) : \t");
	printf("%d, %d, %d\n", *array, *(array+1), *(array+2));

	//�����Ͱ� ����Ű�� �������� ���� ���
	printf("�����Ϳ� ���� ������ ���� : \t");
	printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
	printf("�����Ϳ� ���� ������ ����(������ ��) : \t");
	printf("%d, %d, %d\n", *ptr, *(ptr+1), *(ptr+2));

	//�迭�� �������� �ּҸ� ���� ���
	printf("�迭�� �ּ� : \t %p\n", array);
	printf("�迭�� �ּ� : \t %p\n", &array[0]);
	printf("�����Ͱ� ����Ű�� �ּ� : \t %p\n", ptr);
	printf("�����Ͱ� ����Ű�� �ּ� : \t %p\n", &ptr[0]);

	return 0;
}