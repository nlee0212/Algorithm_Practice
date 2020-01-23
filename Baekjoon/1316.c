#include <stdio.h>

int check() {
	char s[101];
	int a[26] = { 0 },i,len,flag=1;
	scanf("%s", s);
	len = strlen(s);
	for (i = 0; i < len; i++) {
		if (i == len - 1) {
			if (a[s[i] - 'a'] == -1)flag = 0;
			break;
		}
		if (i > 0 && s[i - 1] != s[i]) {
			if (a[s[i] - 'a'] == -1) {
				flag = 0;
				break;
			}
		}
		if (s[i] != s[i + 1]) a[s[i] - 'a'] = -1;
	}
	return flag;
}

int main() {
	int n,i,res=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) res += check();
	printf("%d", res);
}