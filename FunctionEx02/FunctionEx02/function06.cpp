#include<stdio.h>

int sum(int data[5]);

int main(void)
{
	int total;
	int data[5] = {10, 30, 20, 50, 70};
	total = sum(data);

	printf("гу╟Х : %d\n", total);
	return 0;
}

int sum(int *data)
{
	int i, total = 0;
	for(i=0 ; i<5 ; i++)
	{
		total += data[i];
	}
	return total;
}