#include <stdio.h>

int main() {
	int n, a, s=0, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%1d", &a);
		s += a;
	}
	printf("%d", s);
}