#include <stdio.h>

int main(void) {
	int t,a,b,i;
	scanf("%d", &t);
	int* sum = (int*)malloc(sizeof(int)*t);
	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}
	for (i = 0; i < t; i++)printf("%d\n", sum[i]);
	return 0;
}