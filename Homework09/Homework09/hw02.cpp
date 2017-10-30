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

	printf("학생 수를 입력하세요 : ");
	scanf("%d", &num);

	st = (Grade *)malloc(sizeof(Grade)*num);

	for(i=0 ; i<num ; i++)
	{
		printf("\n%d번째 학생의 이름 입력하세요: ", i+1);
		scanf("%s", st[i].name);
		
		printf("국어 : ");
		scanf("%d", &st[i].score[0]);
		st[i].total = st[i].score[0];

		printf("영어 : ");
		scanf("%d", &st[i].score[1]);
		st[i].total += st[i].score[1];

		printf("수학 : ");
		scanf("%d", &st[i].score[2]);
		st[i].total += st[i].score[2];

		st[i].average = (double)st[i].total/SUBJECTS; 
	}

	printf("\n************************************************\n");
	printf("이름\t국어\t영어\t수학\t총점\t평균\n");
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