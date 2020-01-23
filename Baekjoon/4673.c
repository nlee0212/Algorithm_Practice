#include <stdio.h>
int self[10000];

void d(int n) {
	while (1) {
		if (n >= 9993) return;
		
		if (n < 10)n *= 2;
		else if (n < 100)n = n + n / 10 + n % 10;
		else if (n < 1000)n = n + n / 100 + (n % 100) / 10 + n % 10;
		else n=n+n/1000+(n%1000)/100+ (n % 100) / 10 + n % 10;

		self[n-1] = 0;
	}
}

int main(void) {
	int i;
	for (i = 0; i < 10000; i++)self[i] = i+1;
	for (i = 0; i < 10000; i++) {
		if (self[i] != 0) d(i+1);
	}
	for (i = 0; i < 10000; i++) {
		if (self[i] != 0)printf("%d\n",self[i]);
	}

	return 0;
}