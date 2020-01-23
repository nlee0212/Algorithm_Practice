#include <stdio.h>

int main() {
	char s[101];
	int cnt = 0,i,len,templen;
	scanf("%s", s);
	len = strlen(s);
	templen = len;
	for (i = 0; i < len; i++) {
		if (s[i] == '=') {
			cnt++;
			switch (s[i - 1]) {
			case('c'): case('s'):
				templen -= 2; break;
			case('z'):
				if (i - 2 >= 0 && s[i - 2] == 'd')templen -= 3;
				else templen -= 2; break;
			}
		}

		else if (s[i] == '-') {
			cnt++;
			templen -= 2;
		}

		else if (s[i] == 'j') {
			if (s[i - 1] == 'l' || s[i - 1] == 'n') {
				cnt++;
				templen -= 2;
			}
		}
	}
	printf("%d", templen + cnt);
}