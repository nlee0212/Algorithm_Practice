#include <stdio.h>

int main() {
	int k=1, n, x;
	scanf("%d", &n);
	while (1) {
		if (k*(k - 1) / 2 < n&&n <= k * (k + 1) / 2)break;
		k++;
	}
	x = n - k * (k - 1) / 2;
	if(k%2==0)printf("%d/%d", x,k + 1 - x);
	else printf("%d/%d",k + 1 - x,x);
}