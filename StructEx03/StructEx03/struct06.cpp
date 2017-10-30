#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_NAME 50

struct ITEM
{
	char name[MAX_NAME];
	int price;
	int num;
};

int main(void)
{
	int i;
	int count, sum=0, total;
	struct ITEM *item = NULL;

	printf("�׸��� ������ �Է��ϼ��� : ");
	scanf("%d", &count);

	item = (ITEM *)malloc(sizeof(ITEM)*count);

	for(i=0 ; i<count ; i++)
	{
		printf("\nǰ�� : ");
		scanf("%s", item[i].name);

		printf("�ܰ� : ");
		scanf("%d", &item[i].price);

		printf("���� : ");
		scanf("%d", &item[i].num);
	}

	printf("----------------------\n");
	printf("ǰ��\t�ܰ�\t����\n");
	printf("----------------------\n");

	for(i=0 ; i<count ; i++)
	{
		printf("%s\t", item[i].name);
		printf("%d\t", item[i].price);
		printf("%d\n", item[i].num);
		sum += (item[i].price * item[i].num);
	}
	free(item);

	total = (int)(sum*1.1);
	printf("----------------------\n");
	printf("�հ� : %d\n", sum);
	printf("�Ѿ� : %d (�ΰ��� 10%%����)\n", total);

	return 0;
}
