#include <stdio.h>

int main(void)
{
	int students, s, sum = 0;
	int score[] = {85, 90, 95, 70, 82, 60, 92, 88};

	students = sizeof(score)/sizeof(int); //배열의 개수 구하기
	
	for(s=0; s<students; s++)
	{
		sum+= score[s];
	}

	printf("총점 : %d\n", sum);
	printf("평균 : %0.2f\n", (double)sum/students);

	return 0;
}