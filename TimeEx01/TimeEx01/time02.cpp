#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start, finish;
	double loop;
	double result, elapsed_time;

	printf("���ݺ��� double�� ������ 10,000,000�� ���մϴ�...\n");

	start = clock();
	for(loop=0 ; loop<10000000000 ; loop++)
	{
		result = 3.63 * 5.27;
	}
	finish = clock();

	elapsed_time = (double)(finish-start)/CLOCKS_PER_SEC;
	printf("�����ϴµ� %0.3f �ʰ� �ɷȽ��ϴ�.\n", elapsed_time);
	return 0;
}