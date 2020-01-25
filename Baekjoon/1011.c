#include <stdio.h>

void k() {
	long int x, y,n=1;
	scanf("%ld %ld", &x, &y);
	while (1) {
		if (n*(n - 1) < (y - x) && (y - x) <= n * n) {
			printf("%ld\n", 2 * n - 1);
			break;
		}
		else if (n*n < (y - x) && (y - x) <= n * (n + 1)) {
			printf("%ld\n", 2 * n);
			break;
		}
		n++;
	}
}

int main() {
	int t, i;
	scanf("%d", &t);
	for (i = 0; i < t; i++)k();
}