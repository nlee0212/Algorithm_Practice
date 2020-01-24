#include <stdio.h>

int main(void) {
	long long k=1, n;
	scanf("%lld", &n);
	if (n == 1) {
		printf("1");
		return 0;
	}
	while (1) {
		if (3 * k*(k - 1) < n - 1 && 3 * k*(k + 1) >= n - 1) break;
		k++;
	}
	printf("%lld", k+1);
}