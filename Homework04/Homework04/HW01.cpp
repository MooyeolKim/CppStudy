//완전수 찾기
#include <stdio.h>

int main(void)
{
	int PN, i, j, sum, cnt=0, n;

	printf("n까지 숫자중 완전수 찾기\n");
	printf("n을 입력 : ");
	scanf("%d", &n);
	
	printf("1 ~ %d까지 완전수 : ", n);

	for(i=2; i<=n; i++)
	{
		sum = 0;
		for(j=1; j<=i/2; j++)
		{
			if(i%j == 0)
				sum += j;
		}

		if(sum == i)
		{
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n완전수의 개수는 %d\n", cnt);

	return 0;
}
