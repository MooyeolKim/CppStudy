//14.03.27
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random, loop;
	srand((unsigned int)time(NULL));

	for(loop=0 ; loop<10 ; loop++)
	{
		random = (int)((double)rand()/RAND_MAX*1000);
		printf("Random number : %03d\n", random);
	}

	return 0;
}