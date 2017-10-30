//14.03.21
#include <stdio.h>
#define NUM 5

//함수 선언
void input(int data[]);
void sort(int data[]);
void output(int data[]);

int main(void)
{
	int data[NUM];

	input(data);
	sort(data);
	output(data);

	return 0;
}

//입력 함수 정의
void input(int data[])
{
	int i;
	printf("숫자 %d개를 입력하세요.\n", NUM);
	for(i=0 ; i<NUM ; i++)
	{
		printf("%d번째 숫자 : ", i+1);
		scanf("%d", &data[i]);
	}
}

//정렬 함수 정의
void sort(int data[])
{
	int i, j, temp;

	for(i=0 ; i<NUM-1 ; i++)
	{
		for(j=i+1 ; j<NUM ; j++)
		{
			if(data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

//출력 함수 정의
void output(int data[])
{
	int i;

	printf("\n입력된 숫자를 크기 순으로 나열합니다.\n");
	for(i=0 ; i<NUM ; i++)
	{
		printf("%d번째 숫자 : %d\n", i+1, data[i]);
	}
}