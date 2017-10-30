//약수의 개수 구하기
#include <stdio.h>

int main(void)
{
	int n, cnt =0, i;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);

	printf("\n***결과***\n");
	printf("입력한 숫자 : %d\n", n);
	printf("약수 : ");

	for(i = 1; i <= n; i++)
	{
		if(n%i == 0)
		{
			cnt++;
			printf("%d ", i);
		}		
	}
	
	printf("\n약수의 개수 : %d\n", cnt);

	return 0;
}