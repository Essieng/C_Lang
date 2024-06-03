#include <stdio.h>
void main() {
	int a, b, c;
	a = b = c = 0;
	a = ++b + ++c;
	// 윗줄 계산될때 b는 1, c는 1로 단항연산되어 계산
	printf("a = ++b + ++c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
	a = b++ + c++;
	// 윗줄 계산될때는 단항연산 전 값으로 계산된뒤 단항연산 됨.
	printf("a = b++ + c++ 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
	a = b-- + --c;
	// 윗줄 계산될때는 b는 단항연산 전 값으로 계산된뒤 단항연산 됨.
	// c는 현재값에서 -1(단항연산) 된 다음 계산됨.
	printf("a = b-- + --c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
}