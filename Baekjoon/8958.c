#include <stdio.h>

void score() {
	char ox[80];
	int sc[80] = { 0 },i,sum=0;
	scanf("%s", ox);
	for (i = 0; i < strlen(ox); i++) {
		if (ox[i] == 'O') {
			if (i == 0)sc[i]++;
			else sc[i] = sc[i - 1] + 1;
			sum += sc[i];
		}
	}
	printf("%d\n", sum);
}

int main(void) {
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)score();
	return 0;
}