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
	Student da = {201401, "도민준", 97, 95, 93};
	Student chean = {201402, "천송이", 85, 83, 81};
	Student yu,lee;
	da.sum = da.kor + da.eng + da.mat;
	da.avg = (double)da.sum / 3;
	chean.sum = chean.kor + chean.eng + chean.mat;
	chean.avg = (double)chean.sum / 3;

	yu = da;
	yu.num += 2;
	strcpy(yu.name, "유세미");
	yu.eng -= 10;
	yu.sum = yu.kor + yu.eng + yu.mat;
	yu.avg = (double)yu.sum / 3;

	lee = chean;
	lee.num += 2;
	strcpy(lee.name, "이휘경");
	lee.eng += 10;
	lee.sum = lee.kor + lee.eng + lee.mat;
	lee.avg = (double)lee.sum / 3;
	

	printf("%d %s %d %d %d %d %0.2f\n", da.num, da.name, da.kor, da.eng, da.mat, da.sum, da.avg);
	printf("%d %s %d %d %d %d %0.2f\n", chean.num, chean.name, chean.kor, chean.eng, chean.mat, chean.sum, chean.avg);
	printf("%d %s %d %d %d %d %0.2f\n", yu.num, yu.name, yu.kor, yu.eng, yu.mat, yu.sum, yu.avg);
	printf("%d %s %d %d %d %d %0.2f\n", lee.num, lee.name, lee.kor, lee.eng, lee.mat, lee.sum, lee.avg);

	return 0;
}