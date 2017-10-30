#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, finish;
	double loop;
	double result, elapsed_time;

	printf("지금부터 double형 변수를 10,000,000번 곱합니다...\n");

	start = clock();
	for(loop=0 ; loop<10000000000 ; loop++)
	{
		result = 3.63 * 5.27;
	}
	finish = clock();

	elapsed_time = (double)(finish-start)/CLOCKS_PER_SEC;
	printf("수행하는데 %0.3f 초가 걸렸습니다.\n", elapsed_time);
	return 0;
}