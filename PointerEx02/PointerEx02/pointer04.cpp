#include <stdio.h>

int main(void)
{
	int val = 100;
	int *ptr = NULL;
	ptr = &val;

	//주소 출력
	printf("%p\n", ptr); //16진수 주소
	printf("%p\n", &val);
	printf("%d\n", ptr); //10진수 주소
	printf("%d\n", &val);

	//데이터 출력
	printf("%d\n", *ptr); //가르키는 곳의 값
	printf("%d\n", val);

	return 0;
}
