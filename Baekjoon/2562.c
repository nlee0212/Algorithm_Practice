#include <stdio.h>

int main() {
	int a,i,max=0,maxin=1;
	for (i = 0; i < 9; i++) {
		scanf("%d", &a);
		if (a > max) {
			max = a;
			maxin = i+1;
		}
	}
	printf("%d\n%d", max, maxin);
}