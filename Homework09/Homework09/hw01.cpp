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

	printf("���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	ct = (Customers*)malloc(sizeof(Customers)*num);

	
	for(i=0 ; i<num; i++)
	{
		printf("\n***%d��° �� ���� �Է�***\n", i+1);

		printf("���� : ");
		scanf("%s", ct[i].name);

		printf("��ȭ��ȣ : ");
		scanf("%s", ct[i].phone);

		printf("�ּ� : ");
		scanf("%s", ct[i].address);

		printf("���� : ");
		scanf("%d", &ct[i].age);

		printf("���� : ");
		scanf("%s", ct[i].gender);

		printf("Ű : ");
		scanf("%f", &ct[i].height);

		printf("������ : ");
		scanf("%f", &ct[i].weight);
	}

	printf("\n--------------------------------------------------------\n");
	printf("\n--------------------****������****---------------------\n");
	printf("�̸�\t��ȭ��ȣ\t�ּ�\t\t����\t����\tŰ\t������\n");
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