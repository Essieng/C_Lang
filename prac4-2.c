#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int sum = 0;
	int num = 0;
	int i = 0;
	
	while (i < 5) {
		while (num <= 0) {
			printf("���� ������ �Է�(%d ��°) : ", i + 1); // i + 1�� ��ǻ�� �������� ���۰� 0, ��� �������� ���۰� 1�� ���� �ν��ϱ� ������ �����
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("���� : %d \n", sum);
}