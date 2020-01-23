#include <stdio.h>

int main() {
	char s[100];
	signed int a[26],i;
	memset(a, -1, sizeof(a));
	scanf("%s", s);
	for (i = 0; i < strlen(s); i++) {
		if(a[s[i] - 97] == -1) a[s[i] - 97] = i;
	}
	for (i = 0; i < 26; i++)printf("%d ", a[i]);
}