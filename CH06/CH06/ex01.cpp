//14.03.20
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
	int i, j, students;
	struct Grade *st = NULL;
	char *subject[SUBJECTS] = {"����", "����", "����"};

	//�޸� �Ҵ��
	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &students);

	st = (Grade *)malloc(sizeof(Grade)*students);

	//���� �Էº�
	for(i=0 ; i<students ; i++)
	{
		printf("%d��° �л� ���� �Է�\n", i+1);
		printf("�̸� : ");
		scanf("%s", st[i].name);

		for(j=0 ; j<SUBJECTS ; j++)
		{
			printf("%s : ", subject[j]);
			scanf("%d", &st[i].score[j]);
		}
		printf("\n");
	}

	//���� ����
	for(i=0 ; i<students ; i++)
	{
		st[i].total = 0;
		for(j=0 ; j<SUBJECTS ; j++)
		{
			st[i].total += st[i].score[j];
		}
		st[i].average = (double)st[i].total/SUBJECTS;
	}

	//��º�
	printf("\n----------------------------------------------------------\n");
	printf("---------------------****�� �� ǥ****---------------------\n");
	printf("�̸�\t| ����\t| ����\t| ����\t| ����\t| ���\n");
	for(i=0 ; i<students ; i++)
	{
		printf("%s\t| ", st[i].name);
		for(j=0 ; j<SUBJECTS ; j++)
		{
			printf("%d\t| ", st[i].score[j]);
		}
		printf("%d\t| ", st[i].total);
		printf("%0.2f\n", st[i].average);
	}
	printf("----------------------------------------------------------\n");
	
	free(st);
	return 0;
}
	
