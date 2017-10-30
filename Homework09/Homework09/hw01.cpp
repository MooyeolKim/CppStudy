#include <stdio.h>
#include <malloc.h>

struct Customers
{
	char name[20];
	char phone[20];
	char address[50];
	int age;
	char gender[10];
	float height;
	float weight;
};

int main(void)
{
	int i, num;
	Customers *ct = NULL;

	printf("고객의 수를 입력하시오 : ");
	scanf("%d", &num);

	ct = (Customers*)malloc(sizeof(Customers)*num);

	
	for(i=0 ; i<num; i++)
	{
		printf("\n***%d번째 고객 정보 입력***\n", i+1);

		printf("성명 : ");
		scanf("%s", ct[i].name);

		printf("전화번호 : ");
		scanf("%s", ct[i].phone);

		printf("주소 : ");
		scanf("%s", ct[i].address);

		printf("나이 : ");
		scanf("%d", &ct[i].age);

		printf("성별 : ");
		scanf("%s", ct[i].gender);

		printf("키 : ");
		scanf("%f", &ct[i].height);

		printf("몸무게 : ");
		scanf("%f", &ct[i].weight);
	}

	printf("\n--------------------------------------------------------\n");
	printf("\n--------------------****고객정보****---------------------\n");
	printf("이름\t전화번호\t주소\t\t나이\t성별\t키\t몸무게\n");
	for(i=0 ; i<num ; i++)
	{
		printf("%s\t", ct[i].name);
		printf("%s\t", ct[i].phone);
		printf("%s\t\t", ct[i].address);
		printf("%d\t", ct[i].age);
		printf("%s\t", ct[i].gender);
		printf("%0.2f\t", ct[i].height);
		printf("%0.2f\n", ct[i].weight);
	}
	printf("--------------------------------------------------------\n");

	free(ct);

	return 0;
}