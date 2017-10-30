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

	printf("항목의 개수를 입력하세요 : ");
	scanf("%d", &count);

	item = (ITEM *)malloc(sizeof(ITEM)*count);

	for(i=0 ; i<count ; i++)
	{
		printf("\n품명 : ");
		scanf("%s", item[i].name);

		printf("단가 : ");
		scanf("%d", &item[i].price);

		printf("수량 : ");
		scanf("%d", &item[i].num);
	}

	printf("----------------------\n");
	printf("품명\t단가\t수량\n");
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
	printf("합계 : %d\n", sum);
	printf("총액 : %d (부가세 10%%포함)\n", total);

	return 0;
}
