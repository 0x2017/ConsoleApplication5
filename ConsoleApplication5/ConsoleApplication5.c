#include <stdio.h>

int main(void)
{

	int x;

	printf("16진수 정수를 입력하시오: ");
	scanf_s("%x", &x);
	printf("8진수: %o 입니다.\n", x);
	printf("10진수: %d 입니다.\n", x);
	printf("16진수: %#x 입니다.\n", x); // 앞에 0x를 붙이고싶다면 %#x로 바꾸면 됨.

	return 0;

}