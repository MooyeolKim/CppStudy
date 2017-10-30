#include <stdio.h>

#define MAX_MAIN_MENU 4
#define MAX_SUB_MENU 2

int MainMenu(void);
int SubMenu(int mainmenu);
void Conversion(int mainmenu, int submenu);
double mile2kilometer(double mile);
double kilometer2mile(double kilometer);
double pound2kilogram(double pound);
double kilogram2pound(double kilogram);
double gallon2liter(double gallon);
double liter2gallon(double liter);
double acre2ha(double acre);
double ha2acre(double ha);

static char *title[MAX_MAIN_MENU][MAX_SUB_MENU] = {
	{"마일", "킬로미터"},
	{"파운드", "킬로그램"},
	{"갤론", "리터"},
	{"에이커", "헥타아르"}
};

int main(void)
{
	int mainmenu, submenu;

	while(1)
	{
		mainmenu = MainMenu();

		if(mainmenu >= 0 && mainmenu < MAX_MAIN_MENU)
		{
			submenu = SubMenu(mainmenu);
			if(submenu >= 0 && submenu < MAX_SUB_MENU)
				Conversion(mainmenu, submenu);
		}
		else if(mainmenu == 4)
			break;
	}
	return 0;
}

int MainMenu(void)
{
	int menu;

	printf("-----------------------------------\n");
	printf("0. 길이 변환\n");
	printf("1. 무게 변환\n");
	printf("2. 부피 변환\n");
	printf("3. 넓이 변환\n");
	printf("4. 종료\n");
	printf("-----------------------------------\n");
	printf("입력 : ");
	scanf("%d", &menu);

	return menu;
}

int SubMenu(int mainmenu)
{
	int submenu;

	printf("-----------------------------------\n");
	printf("0. %s -> %s\n", title[mainmenu][0], title[mainmenu][1]);
	printf("1. %s -> %s\n", title[mainmenu][1], title[mainmenu][0]);
	printf("-----------------------------------\n");

	printf("입력 : ");
	scanf("%d", &submenu);
	printf("-----------------------------------\n");

	return submenu;
}

void Conversion(int mainmenu, int submenu)
{
	double input, output;
	double (*convert[MAX_MAIN_MENU][MAX_SUB_MENU])(double) = {
		{mile2kilometer, kilometer2mile},
		{pound2kilogram, kilogram2pound},
		{gallon2liter, liter2gallon},
		{acre2ha, ha2acre}
	};

	printf("%s : ", title[mainmenu][submenu]);
	scanf("%lf", &input);
	output = convert[mainmenu][submenu](input);
	printf("-> %s : %0.2f\n", title[mainmenu][(submenu+1)%2], output);
}

double mile2kilometer(double mile)
{
	return mile*1.6093;
}

double kilometer2mile(double kilometer)
{
	return kilometer/1.6093;
}

double pound2kilogram(double pound)
{
	return pound*0.45359;
}

double kilogram2pound(double kilogram)
{
	return kilogram/0.45359;
}

double gallon2liter(double gallon)
{
	return gallon*3.7854;
}

double liter2gallon(double liter)
{
	return liter/3.7854;
}

double acre2ha(double acre)
{
	return acre*0.40468;
}

double ha2acre(double ha)
{
	return ha/0.45359;
}