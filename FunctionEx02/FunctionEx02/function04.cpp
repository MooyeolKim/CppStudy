#include <stdio.h>

typedef struct
{
	char name[100];
	int price;
	int count;
} Item;

void PrintItem(Item item);

int main(void)
{
	Item item = {"���", 1000, 50};
	PrintItem(item);
	printf("main�Լ� ��\n");
	printf("ǰ�� : %s\n", item.name);
	printf("�ܰ� : %d\n", item.price);
	printf("���� : %d\n", item.count);
	return 0;
}

void PrintItem(Item item)
{
	item.price = 3000;
	printf("PrintItem�Լ� ��\n");
	printf("ǰ�� : %s\n", item.name);
	printf("�ܰ� : %d\n", item.price);
	printf("���� : %d\n", item.count);
}