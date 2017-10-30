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
		printf("%0.2f�� ���� ��ȯ �ϸ� %0.2f�Դϴ�.\n", Bfval, Afval);
		break;
	case 1:
		Afval = weight(&Bfval);
		printf("%0.2f�� ���� ��ȯ �ϸ� %0.2f�Դϴ�.\n", Bfval, Afval);
		break;
	case 2:
		Afval = volume(&Bfval);
		printf("%0.2f�� ���� ��ȯ �ϸ� %0.2f�Դϴ�.\n", Bfval, Afval);
		break;
	case 3:
		Afval = area(&Bfval);
		printf("%0.2f�� ���� ��ȯ �ϸ� %0.2f�Դϴ�.\n", Bfval, Afval);
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
	printf("0. ���� ��ȯ\n");
	printf("1. ���� ��ȯ\n");
	printf("2. ���� ��ȯ\n");
	printf("3. ���� ��ȯ\n");
	printf("4. ����\n");
	do
	{
		printf("�޴��� �����ϼ���(0~4) : ");
		scanf("%d", num);
	}while(*num<0 || *num>4);

	system("cls");
}

double length(double *Bfval)
{
	int num;
	double Afval;
	printf("0. ����-->ų�ι���\n");
	printf("1. ų�ι���-->����\n");
	do
	{
		printf("�޴��� �����ϼ���(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("���� �Է��ϼ��� : ");
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
	printf("0. �Ŀ��-->ų�α׷�\n");
	printf("1. ų�α׷�-->�Ŀ��\n");
	do
	{
		printf("�޴��� �����ϼ���(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("���� �Է��ϼ��� : ");
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
	printf("0. ����-->����\n");
	printf("1. ����-->����\n");
	do
	{
		printf("�޴��� �����ϼ���(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("���� �Է��ϼ��� : ");
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
	printf("0. ����Ŀ-->��Ÿ��\n");
	printf("1. ��Ÿ��-->����Ŀ\n");
	do
	{
		printf("�޴��� �����ϼ���(0~1) : ");
		scanf("%d", &num);
	}while(num<0 || num>1);
	printf("���� �Է��ϼ��� : ");
	input(Bfval);
	Afval = *Bfval;

	if(num==0)
		Afval /= 0.40468;
	else
		Afval *= 0.40468;

	return Afval;
}

