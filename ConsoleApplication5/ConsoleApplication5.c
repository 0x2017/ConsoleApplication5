#include <stdio.h>

int main(void)
{

	int x;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf_s("%x", &x);
	printf("8����: %o �Դϴ�.\n", x);
	printf("10����: %d �Դϴ�.\n", x);
	printf("16����: %#x �Դϴ�.\n", x); // �տ� 0x�� ���̰�ʹٸ� %#x�� �ٲٸ� ��.

	return 0;

}