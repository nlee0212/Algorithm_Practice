#include <stdio.h>

int main(void) {
	int n, x,i,s;
	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &s);
		if (s < x) printf("%d ",s);
	}
	return 0;
}