#include <stdio.h>
#include <time.h>
#define MAX_OUTPUT 256

int main(void)
{
	time_t now = time(NULL);
	struct tm *lt = localtime(&now);
	char output[MAX_OUTPUT];

	printf("ctime : %s", ctime(&now));
	printf("asctime : %s", asctime(lt));
	
	strftime(output, MAX_OUTPUT, "%Y년 %m월(%b) %d일(연중 %j일) %p %I시 %M분 %S초(%X)", lt);
	printf("strftime : %s\n", output);
	return 0;
}