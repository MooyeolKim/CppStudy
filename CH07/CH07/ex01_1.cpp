#include <stdio.h>
#include <Windows.h>

void input(double *Bfval);
void menuinput(int *num);
double length(double *Bfval);
double weight(double *Bfval);
double volume(double *Bfval);
double area(double *Bfval);

int main(void)
{
	int num;
	double Bfval, Afval;

	menuinput(&num);
	switch(num)
	{
	case 0:
		Afval = length(&Bfval);
		printf("%0.2f를 길이 변환 하면 %0.2f입니다.\n", Bfval, Afval);
		break;
	case 1:
		Afval = weight(&Bfval);
		printf("%0.2f를 무게 변환 하면 %0.2f입니다.\n", Bfval, Afval);
		break;
	case 2:
		Afval = volume(&Bfval);
		printf("%0.2f를 부피 변환 하면 %0.2f입니다.\n", Bfval, Afval);
		break;
	case 3:
		Afval = area(&Bfval);
		printf("%0.2f를 넓이 변환 하면 %0.2f입니다.\n", Bfval, Afval);
		break;
	case 4:
		return 0;
	}
	return 0;
}

void input(double *Bfval)
{
	scanf("%lf", Bfval);
}

void menuinput(int *num)
{
	printf("0. 길이 변환\n");
	printf("1. 무게 변환\n");
	printf("2. 부피 변환\n");
	printf("3. 넓이 변환\n");
	printf("4. 종료\n");
	do
	{
		printf("메뉴를 선택하세요(0~4) : ");
		scanf("%d", num);
	}while(*num<0 || *num>4);

	system("cls");
}

double length(double *Bfval)
{
	int num;
	double Afval;
	printf("0. 마일-->킬로미터\n");
	printf("1. 킬로미터-->마일\n");
	do
	{
		printf("메뉴를 선택하세요(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("값을 입력하세요 : ");
	input(Bfval);
	Afval = *Bfval;

	if(num==0)
		Afval /= 1.6093;
	else
		Afval *= 1.6093;

	return Afval;
}

double weight(double *Bfval)
{
	int num;
	double Afval;
	printf("0. 파운드-->킬로그램\n");
	printf("1. 킬로그램-->파운드\n");
	do
	{
		printf("메뉴를 선택하세요(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("값을 입력하세요 : ");
	input(Bfval);
	Afval = *Bfval;

	if(num==0)
		Afval /= 0.45359;
	else
		Afval *= 0.45359;

	return Afval;
}

double volume(double *Bfval)
{
	int num;
	double Afval;
	printf("0. 갤론-->리터\n");
	printf("1. 리터-->갤론\n");
	do
	{
		printf("메뉴를 선택하세요(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("값을 입력하세요 : ");
	input(Bfval);
	Afval = *Bfval;

	if(num==0)
		Afval /= 3.7854;
	else
		Afval *= 3.7854;

	return Afval;
}

double area(double *Bfval)
{
	int num;
	double Afval;
	printf("0. 에이커-->헥타르\n");
	printf("1. 헥타르-->에이커\n");
	do
	{
		printf("메뉴를 선택하세요(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("값을 입력하세요 : ");
	input(Bfval);
	Afval = *Bfval;

	if(num==0)
		Afval /= 0.40468;
	else
		Afval *= 0.40468;

	return Afval;
}

