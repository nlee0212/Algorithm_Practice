#include <stdio.h>
#define ll long long

ll koong(int n) {
	if (n < 2) return 1;
	if (n == 2) return 2;
	if (n == 3)return 4;
	if (n > 3) {
		ll* k = (ll*)malloc(sizeof(ll) * 5);
		k[0] = k[1] = 1;
		k[2] = 2;
		k[3] = 4;
		int i, c = 3;
		while (1) {
			k[4] = k[0] + k[1] + k[2] + k[3];
			c++;
			if (c == n) return k[4];
			for (i = 0; i < 4; i++) k[i] = k[i + 1];
		}
	}
}

int main(void) {
	int t,i,n;
	scanf("%d", &t);
	int knum[69];

	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		knum[i] = n;
	}

	for (i = 0; i < t; i++) printf("%lld\n", koong(knum[i]));

	return 0;
}