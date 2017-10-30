#include <stdio.h>

int main(void)
{
	short array[3];
	short *ptr = array;
	ptr[0] = 0;
	ptr[1] = 10;
	ptr[2] = 20;

	//배열에 저정된 값을 출력
	printf("배열에 의한 데이터 참조 : \t");
	printf("%d, %d, %d\n", array[0], array[1], array[2]);
	printf("배열에 의한 데이터 참조(포인터 형) : \t");
	printf("%d, %d, %d\n", *array, *(array+1), *(array+2));

	//포인터가 가리키는 데이터의 값을 출력
	printf("포인터에 의한 데이터 참조 : \t");
	printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
	printf("포인터에 의한 데이터 참조(포인터 형) : \t");
	printf("%d, %d, %d\n", *ptr, *(ptr+1), *(ptr+2));

	//배열과 포인터의 주소를 각각 출력
	printf("배열의 주소 : \t %p\n", array);
	printf("배열의 주소 : \t %p\n", &array[0]);
	printf("포인터가 가리키는 주소 : \t %p\n", ptr);
	printf("포인터가 가리키는 주소 : \t %p\n", &ptr[0]);

	return 0;
}