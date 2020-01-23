#include <stdio.h>

int main(void) {
	int cnt = 99,n,i;
	scanf("%d", &n);
	if (n < 100) printf("%d", n);
	else if (n >= 100 && n <= 110)printf("99");
	else {
		if (n == 1000)n--;
		for (i = 111; i <= n; i++) {
			if (i / 100 + i % 10 == 2 * ((i % 100) / 10)) cnt++;
		}
		printf("%d", cnt);
	}
	return 0;
}