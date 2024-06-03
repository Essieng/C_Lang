#include <stdio.h>
#define CONDITION 1
void main() {
#if CONDITION
	printf("\n A 프로그램을 컴파일");
#else
	printf("\n B 프로그램을 컴파일");
#endif
}