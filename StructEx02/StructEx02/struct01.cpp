//14.03.18
#include <stdio.h>
#include <string.h>

struct Student
{
	int num;
	char name[20];
	int kor;
	int eng;
	int mat;
	int sum;
	double avg;
};

int main(void)
{
	Student da, chean;
	da.num = 201401;
	//da.name = "µµπŒ¡ÿ";
	strcpy(da.name, "µµπŒ¡ÿ");
	da.kor = 97;
	da.eng = 95;
	da.mat = 93;
	da.sum = da.kor+da.eng+da.mat;
	da.avg = (double)da.sum/3;

	chean=da;
	chean.num += 1;
	strcpy(chean.name, "√µº€¿Ã");
	chean.eng -= 10;
	chean.mat -= 20;
	chean.sum = chean.kor + chean.eng + chean.mat;
	chean.avg = (double)chean.sum/3;

	printf("%d %s %d %d %d %d %0.2f\n", da.num, da.name, da.kor, da.eng, da.mat, da.sum, da.avg);
	printf("%d %s %d %d %d %d %0.2f\n", chean.num, chean.name, chean.kor, chean.eng, chean.mat, chean.sum, chean.avg);


	return 0;
}