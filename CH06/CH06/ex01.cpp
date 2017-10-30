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
	char *subject[SUBJECTS] = {"국어", "영어", "수학"};

	//메모리 할당부
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &students);

	st = (Grade *)malloc(sizeof(Grade)*students);

	//성적 입력부
	for(i=0 ; i<students ; i++)
	{
		printf("%d번째 학생 정보 입력\n", i+1);
		printf("이름 : ");
		scanf("%s", st[i].name);

		for(j=0 ; j<SUBJECTS ; j++)
		{
			printf("%s : ", subject[j]);
			scanf("%d", &st[i].score[j]);
		}
		printf("\n");
	}

	//성적 계산부
	for(i=0 ; i<students ; i++)
	{
		st[i].total = 0;
		for(j=0 ; j<SUBJECTS ; j++)
		{
			st[i].total += st[i].score[j];
		}
		st[i].average = (double)st[i].total/SUBJECTS;
	}

	//출력부
	printf("\n----------------------------------------------------------\n");
	printf("---------------------****성 적 표****---------------------\n");
	printf("이름\t| 국어\t| 영어\t| 수학\t| 총점\t| 평균\n");
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
	
