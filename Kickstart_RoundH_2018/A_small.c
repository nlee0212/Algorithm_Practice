#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXP 100
#define MAXN 50
#define ll long long

int include(char* a, char* b) {//tests if a includes b.(a is the longer string)
	int i;
	for (i = 0; i < strlen(b); i++) {
		if (a[i] != b[i]) return 1;//return 1 when string b is not included in a. worth counting.
	}
	return 0;
	//returns 0 when string b is included in a. doesn't have to count
}

void Test(int testnum) {
	int N, P;
	int j;
	ll sequence;
	char** prefix;

	scanf("%d %d", &N, &P);
	sequence = pow(2, N);

	prefix = (char**)malloc(sizeof(char*)*P);
	for (j = 0; j < P; j++) {
		prefix[j] = (char*)malloc(sizeof(char)*(N+1));
		scanf("%s", prefix[j]);
	}

	char** lenprefix;

	lenprefix = (char**)malloc(sizeof(char*)*P);
	for (j = 0; j < P; j++) lenprefix[j] = (char*)malloc(sizeof(char)*(N + 1));
	int index=0;

	for (int len = 1; len <= N; len++) {
		if (index == P || sequence==0) break;
		int lencount=0;

		for (int i = 0; i < P; i++) {
			if (strlen(prefix[i]) == len) {
				if (index==0) {
					lenprefix[index] = prefix[i];
					lencount++;
					index++;
				}

				else {
					int flag = 1;
					for (int k = 0; k < index; k++) {
						flag *= include(prefix[i], lenprefix[k]);
					}
					if (flag) {//this prefix does not include any of the smaller ones - totally different prefix
						lenprefix[index] = prefix[i];
						lencount++;
						index++;
					}
				}
			}
		}

		sequence = sequence - pow(2,(N - len))*lencount;
	}

	printf("Case #%d: %d\n", testnum, sequence);
}

int main(void) {
	int T;
	int i;

	freopen("A-small-practice.in", "r", stdin);
	freopen("A-practice.out", "w", stdout);

	scanf("%d", &T);
	//printf("T: %d", T);

	for (i = 0; i < T; i++) {
		Test(i+1);
	}

	return 0;
}