#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int i, j;

	printf("***������***\n");
	Sleep(500);
	printf("�����....\n");
	Sleep(500);
	printf("�����մϴ�. *^^*\n");
	Sleep(1000);

	for(i=2 ; i<=9 ; i++)
	{
		system("cls");
		printf("*** %d �� ***\n", i);
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
