#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int i, j;

	printf("***구구단***\n");
	Sleep(500);
	printf("잠시후....\n");
	Sleep(500);
	printf("시작합니다. *^^*\n");
	Sleep(1000);

	for(i=2 ; i<=9 ; i++)
	{
		system("cls");
		printf("*** %d 단 ***\n", i);
		Sleep(800);
		for(j=1 ; j<=9 ; j++)
		{
			printf(" %d * ", i);
			Sleep(150);
			printf("%d = ", j);
			Sleep(150);
			printf("%2d \n", i*j);
			Sleep(150);
		}
		Sleep(2000);
	}

	return 0;
}
