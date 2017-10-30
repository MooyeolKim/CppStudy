#include <stdio.h>
#include <malloc.h>

#define MAX_NAME 20
#define SUBJECTS 3

struct Grade
{
	char name[MAX_NAME];
	int score[SUBJECTS];
	int total;
	double average;
};

int main(void)
{
	int i, num;
	Grade *st = NULL;

	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &num);

	st = (Grade *)malloc(sizeof(Grade)*num);

	for(i=0 ; i<num ; i++)
	{
		printf("\n%d��° �л��� �̸� �Է��ϼ���: ", i+1);
		scanf("%s", st[i].name);
		
		printf("���� : ");
		scanf("%d", &st[i].score[0]);
		st[i].total = st[i].score[0];

		printf("���� : ");
		scanf("%d", &st[i].score[1]);
		st[i].total += st[i].score[1];

		printf("���� : ");
		scanf("%d", &st[i].score[2]);
		st[i].total += st[i].score[2];

		st[i].average = (double)st[i].total/SUBJECTS; 
	}

	printf("\n************************************************\n");
	printf("�̸�\t����\t����\t����\t����\t���\n");
	for(i=0 ; i<num ; i++)
	{
		printf("%s\t", st[i].name);
		printf("%d\t", st[i].score[0]);
		printf("%d\t", st[i].score[1]);
		printf("%d\t", st[i].score[2]);
		printf("%d\t", st[i].total);
		printf("%0.2f\n", st[i].average);
	}
	printf("************************************************\n");

	free(st);
	return 0;
}