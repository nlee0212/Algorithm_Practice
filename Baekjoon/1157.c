#include <stdio.h>

int main() {
	int a[26] = { 0 },i,max=0,cnt=0,len;
	char s[1000001],c;
	scanf("%s", s);
	len = strlen(s);//strlen could take more time then you think
	for (i = 0; i < len; i++) {
		if (max > len / 2)break;
		if (s[i] >= 97) ++a[s[i] - 97];
		else ++a[s[i] - 65];
	}

	for (i = 0; i < 26; i++) {
		if (max < a[i])max = a[i];
	}
	for (i = 0; i < 26; i++) {
		if (max == a[i]) {
			cnt++;
			if (cnt > 1)break;
			c = i + 65;
		}
	}
	if (cnt > 1)printf("?");
	else printf("%c", c);
}