#include <stdio.h>

int main(void)
{
	int num;

	do
	{
		printf("1 - 파일 열기\n");
		printf("2 - 파일 저장\n");
		printf("3 - 파일 닫기\n");
		printf("1~3번중 번호를 입력하시오.");
		scanf("%d", &num);
	//}while(num<1 || num>3);
	}while(!(num>=1 && num<=3));
	
	printf("선택한 번호는 %d입니다\n", num);

	return 0;
}
