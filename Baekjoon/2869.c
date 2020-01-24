#include <stdio.h>

int main() {
	long int a, b, v,d;
	scanf("%ld %ld %ld", &a, &b, &v);
	d = a - b;
	if (a == v) printf("1");
	else if ((v - a) % d == 0) printf("%ld", (v - a) / d + 1);
	else printf("%ld", (v - a) / d + 2);
}