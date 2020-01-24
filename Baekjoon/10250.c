#include <stdio.h>

void room() {
	int n, h,w, y, x;
	scanf("%d %d %d", &h, &w, &n);
	y = n % h;
	if (y == 0)y = h;
	x = (n - 1) / h + 1;
	printf("%d%02d\n", y, x);
}

int main() {
	int t,i;
	scanf("%d", &t);
	for (i = 0; i < t; i++)room();
}