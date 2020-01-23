#include <stdio.h>

int main() {
	int i, j,t;
	scanf("%d", &t);
	for (i = 1; i <= t; i++) {
		for (j = 0; j < i; j++)printf("*");
		printf("\n");
	}
	return 0;
}