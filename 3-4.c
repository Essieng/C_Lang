#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int a;
	long long int b;
	float c;
	char ch;
	char s[20];

	printf("정수와 long long 정수를 입력 : ");
	scanf("%d %lld", &a, &b);
	printf("a = %d, b = %lld \n", a, b);
	printf("실수를 입력 : ");
	scanf("%f", &c);
	printf("c = %10.4f, c(지수) = %e \n", c, c);
	printf("문자를 입력 : ");
	scanf(" %c", &ch);
	// 앞의 scanf()를 입력할 때 누른 Enter를 무시하기 위해 %c 앞에 공백을 넣어야 함.
	printf("ch = %c \n", ch);
	printf("문자열을 입력 : ");
	scanf("%s", s);
	printf("s[] = %s \n", s);
}