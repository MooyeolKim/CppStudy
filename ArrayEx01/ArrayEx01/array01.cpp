#include <stdio.h>

int main(void)
{
	int students, s, sum = 0;
	int score[] = {85, 90, 95, 70, 82, 60, 92, 88};

	students = sizeof(score)/sizeof(int); //�迭�� ���� ���ϱ�
	
	for(s=0; s<students; s++)
	{
		sum+= score[s];
	}

	printf("���� : %d\n", sum);
	printf("��� : %0.2f\n", (double)sum/students);

	return 0;
}