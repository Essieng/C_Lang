#include <stdio.h>
void main() {
	int x, y;
	x = 10;
	y = 3;
	printf("x + y = %d \n", x + y);
	printf("x / y = %d \n", x / y);
	printf("x %% y = %d \n", x % y);
	// 출력문에 %를 쓰려면 %%를 써야한다. %를 쓰면 포맷팅으로 인식하기 때문.
	printf("y %% x = %d \n", y + x);
}