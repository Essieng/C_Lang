#include <stdio.h>
void main() {
	int x, y;
	x = 10;
	y = 3;
	printf("x + y = %d \n", x + y);
	printf("x / y = %d \n", x / y);
	printf("x %% y = %d \n", x % y);
	// ��¹��� %�� ������ %%�� ����Ѵ�. %�� ���� ���������� �ν��ϱ� ����.
	printf("y %% x = %d \n", y + x);
}