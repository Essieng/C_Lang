#include <stdio.h>
void main() {
	int a, b, c;
	a = b = c = 0;
	a = ++b + ++c;
	// ���� ���ɶ� b�� 1, c�� 1�� ���׿���Ǿ� ���
	printf("a = ++b + ++c ���� �� a = %d, b = %d, c = %d \n", a, b, c);
	a = b++ + c++;
	// ���� ���ɶ��� ���׿��� �� ������ ���ȵ� ���׿��� ��.
	printf("a = b++ + c++ ���� �� a = %d, b = %d, c = %d \n", a, b, c);
	a = b-- + --c;
	// ���� ���ɶ��� b�� ���׿��� �� ������ ���ȵ� ���׿��� ��.
	// c�� ���簪���� -1(���׿���) �� ���� ����.
	printf("a = b-- + --c ���� �� a = %d, b = %d, c = %d \n", a, b, c);
}