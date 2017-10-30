#include <stdio.h>

typedef struct
{
	char name[100];
	int price;
	int count;
} Item;

void PrintItem(const Item *item);

int main(void)
{
	Item item = {"사과", 1000, 50};
	PrintItem(&item);
	printf("main함수 안\nㄱ");
	printf("품명 : %s\n", item.name);
	printf("단가 : %d\n", item.price);
	printf("수량 : %d\n", item.count);
	return 0;
}

void PrintItem(const Item *item)
{
	//item->price = 3000; 매개변수를 const로 만들었기 때문에 값을 변경할수 없다 .
	printf("PrintItem함수 안\n");
	printf("품명 : %s\n", item->name);
	printf("단가 : %d\n", item->price);
	printf("수량 : %d\n", item->count);
}