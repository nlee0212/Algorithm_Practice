#include <stdio.h>

int main(void) {
	int n, a, b, c;

	scanf("%d%1d%1d%1d", &n, &a, &b, &c);
	a = n * a;
	b = n * b;
	c = n * c;
	printf("%d\n%d\n%d\n%d\n", c, b, a, a * 100 + 10 * b + c);

	return 0;
}
