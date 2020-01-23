#include <stdio.h>

int main(void) {
	int newnum, n,cnt=1,a,b,c;
	scanf("%d", &n);

	if (n < 10) {
		b = n;
		a = 0;
	}
	else {
		b = n % 10;
		a = n / 10;
	}
	c = (a + b)%10;
	newnum = 10 * b + c;
	while (newnum != n) {
		a = b;
		b = c;
		c = (a + b) % 10;
		newnum = 10 * b + c;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}