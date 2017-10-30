#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int students, s, sum=0;
	int *score = NULL;

	printf("성적을 처리할 학생수를 입력 : ");
	scanf("%d", &students);
	score = (int*)malloc(sizeof(int)*students);

	printf("학생의 성적을 입력하세요.\n");
	for(s=0 ; s<students ; s++)
	{
		printf("%d번 : ", s+1);
		scanf("%d", &score[s]);
		//&score[s] = score+s
	}

	printf("-------------------\n");
	for(s=0 ; s<students ; s++)
	{
		sum += score[s];
		printf("%d번 : %3d\n", s+1, score[s]);
	}

	printf("-------------------\n");
	printf("총점 : %3d 점\n", sum);
	printf("평균 : %3.2f 점\n", (double)sum/students);

	free(score);
	return 0;
}