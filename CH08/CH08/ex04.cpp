#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Lottery(int number[]);
void UserInput(int number[]);
int compare(const void *a, const void *b);
int Matching(int number1[], int number2[]);
void ShowResult(int computer[], int user[], int matched);

int main(void)
{
	int computer[6];
	int user[6];
	int matched;

	Lottery(computer);
	UserInput(user);

	qsort(computer, 6, sizeof(int), compare);
	qsort(user, 6, sizeof(int), compare);

	matched = Matching(computer, user);
	ShowResult(computer, user, matched);

	return 0;
}

void Lottery(int number[])
{
	int i, j;
	int duplicated;

	srand((unsigned int)time(NULL));
	for(i=0 ; i<6 ; i++)
	{
		do
		{
			number[i] = (int)((double)rand()/RAND_MAX*44)+1;
			duplicated = 0;

			for(j=0 ; j<i ; j++)
			{
				if(number[j] == number[i])
				{
					duplicated = 1;
					break;
				}
			}
		}while(duplicated);
	}
}

void UserInput(int number[])
{
	int i;
	printf("1���� 45������ ���� 6���� �Է��ϼ��� : ");
	for(i=0 ; i<6 ; i++)
	{
		scanf("%d", &number[i]);
	}
}

int compare(const void *a, const void *b)
{
	if(*(int *)a > *(int *)b)
		return 1;
	else if(*(int *)a < *(int *)b)
		return -1;
	else
		return 0;
}

int Matching(int number1[], int number2[])
{
	int n1=0, n2=0;
	int matched = 0;
	while(n1<6 && n2<6)
	{
		if(number1[n1] == number2[n2])
		{
			matched++;
			n1++;
			n2++;
		}
		else if(number1[n1]<number2[n2])
		{
			n1++;
		}
		else
		{
			n2++;
		}
	}
	return matched;
}

void ShowResult(int computer[], int user[], int matched)
{
	int i;

	printf("�ζ� ��ȣ : ");
	for(i=0 ; i<6 ; i++)
	{
		printf("%02d ", computer[i]);
	}
	printf("\n");

	printf("���� ��ȣ : ");
	for(i=0 ; i<6 ; i++)
	{
		printf("%02d ", user[i]);
	}
	printf("\n");

	printf("���� ��ȣ �� : %d��\n", matched);
	switch(matched)
	{
	case 6:
	case 5:
	case 4:
		printf("****************************************\n");
		printf("\t�����մϴ�. %d� ��÷�ƽ��ϴ�.\t\n", 6-matched+1);
		printf("****************************************\n");
		break;
	default:
		printf("���Դϴ�. �ƽ����� ���� ��ȸ��...\n");
	}
}

	