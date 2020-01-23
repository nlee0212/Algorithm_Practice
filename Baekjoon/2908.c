#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = (a % 10) * 100 + (a % 100) - (a % 10) + a / 100;
	b = (b % 10) * 100 + (b % 100) - (b % 10) + b / 100;
	if (a > b)printf("%d", a);
	else printf("%d", b);
}