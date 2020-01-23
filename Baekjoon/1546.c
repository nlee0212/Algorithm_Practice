#include <stdio.h>

int main(void) {
	int i, n, max = 0;
	float sum = 0;
	scanf("%d", &n);
	int* score = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (max < score[i])max = score[i];
	}
	for (i = 0; i < n; i++)sum += (float)score[i] / max * 100;
	printf("%f", sum / n);
	return 0;
}