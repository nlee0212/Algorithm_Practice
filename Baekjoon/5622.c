#include <stdio.h>

int main() {
	char s[16];
	int i,temp=0;
	scanf("%s", s);
	int len = strlen(s);
	int num = 0;
	for (i = 0; i < len; i++) {
		temp = s[i] - 'A';
		if (temp <= 14) num += temp / 3 + 2;
		else if (temp <= 18)num += 7;
		else if (temp <= 21)num += 8;
		else num += 9;
	}
	printf("%d", num + len);
}