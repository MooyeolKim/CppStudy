//역이등변 삼각형만들기
#include <stdio.h>

int main(void)
{
	int i, j, h;

	printf("**역 이등변 삼각형 만들기**\n");
	printf("높이 : ");
	scanf("%d", &h);

	printf("밑변의 길이 : %d\n\n", 2*h-1);
	

	for(i=1; i<=h; i++)
	{
		for(j=1; j<=i-1; j++)
		{
			printf(" ");
		}
		
		for(j=1; j<=2*(h-i)+1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
		
	printf("\n삼각형의 넓이 : %.2f\n", (double)(2*h-1)*h/2);

	return 0;
}
