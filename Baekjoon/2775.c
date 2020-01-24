#include <stdio.h>

int people(int k, int n) {
	if (k == 0)return n;
	else {
		int res = 0;
		for (int i = 1; i <= n; i++)res += people(k - 1, i);
		return res;
	}
}

void res() {
	int k, n;
	scanf("%d %d", &k, &n);
	printf("%d\n", people(k, n));
}

int main() {
	int t, i;
	scanf("%d", &t);
	for (i = 0; i < t; i++)res();
}