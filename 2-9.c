#include <stdio.h>
int a = 100;
void func() {
	int a = 200;
	printf("func()���� a�� �� : %d \n", a);
}

int main() {
	printf("main()���� a�� �� : %d \n", a);
	func();
}