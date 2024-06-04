#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int sum = 0;
	int num = 0;
	int i = 0;
	
	while (i < 5) {
		while (num <= 0) {
			printf("양의 정수를 입력(%d 번째) : ", i + 1); // i + 1은 컴퓨터 기준으로 시작값 0, 사람 기준으로 시작값 1로 보통 인식하기 때문에 맞춘것
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총합 : %d \n", sum);
}