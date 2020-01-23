#include <stdio.h>

int main() {
	char s[1000001];
	gets(s);
	int len = strlen(s);
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') cnt++;
	}
	if (s[0] == ' ')cnt--;
	if (s[len - 1] == ' ')cnt--;
	printf("%d", cnt + 1);
}