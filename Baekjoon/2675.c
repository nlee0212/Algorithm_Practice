#include <stdio.h>

void rep() {
	int n,i,j;
	char c, s[20];
	scanf("%d", &n);
	scanf("%c%s", &c, s);
	for (i = 0; i < strlen(s); i++) {
		for (j = 0; j < n; j++)printf("%c", s[i]);
	}
	printf("\n");
}

int main() {
	int t,i;
	scanf("%d", &t);
	for (i = 0; i < t; i++)rep();
}