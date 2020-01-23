#include <stdio.h>

int main(void) {
	int i,rem[42] = { 0 },n,cnt=0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (!rem[n % 42]) {
			rem[n % 42] = 1;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}