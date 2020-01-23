#include <stdio.h>

void score() {
	int n, i, sum = 0,cnt=0;
	float av = 0;
	scanf("%d", &n);
	int* sc = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) {
		scanf("%d", &sc[i]);
		sum += sc[i];
	}
	av = (float)sum / n;
	for (i = 0; i < n; i++) {
		if (sc[i] > av)cnt++;
	}
	printf("%.3f%%\n", (float)cnt / n*100);
}

int main(void) {
	int t,i;
	scanf("%d", &t);
	for (i = 0; i < t; i++) score();
}