#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXN 101

void SolveB(int testnum);

int main(void) {
	int T;

	freopen("B-large-practice.in", "r", stdin);
	freopen("B-large-practice.out", "w", stdout);

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		SolveB(i + 1);
	}

	return 0;
}

void SolveB(int testnum) {
	int score = 0, maxscore=0;
	int paintcount = 0;
	int* section;
	int N;
	scanf("%d", &N);
	section = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) scanf("%1d", &section[i]);

	paintcount = N / 2;
	if (N % 2 == 1) paintcount++;

	for (int j = 0; j < paintcount; j++)
		score += section[j];
	maxscore = score;

	for (int i = 1; i <= N - paintcount; i++) {
		score = score - section[i - 1] + section[i + paintcount - 1];
		if (maxscore < score) maxscore = score;
	}

	printf("Case #%d: %d\n", testnum, maxscore);
}