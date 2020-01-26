#include <stdio.h>

int** maze;
int vecx[4] = { 0,0,-1,1 };//»óÇÏÁÂ¿ì
int vecy[4] = { 1,-1,0,0 };//»óÇÏÁÂ¿ì

typedef struct {
	int x, y;
}queue;

void BFS(int n, int m) {
	int cur = 0, cnt=0;
	queue q[10000];
	int curx=1, cury=1;
	int nextx, nexty;
	q[0].x = curx;
	q[0].y = cury;
	cnt++;
	
	while (cury <= n && curx <= m) {
		curx = q[cur].x;
		cury = q[cur++].y;
		for (int i = 0; i < 4; i++) {
			nextx = curx + vecx[i];
			nexty = cury + vecy[i];
			if (nexty==1&&nextx==1)continue;
			if (maze[nexty][nextx]==1) {
				maze[nexty][nextx] += maze[cury][curx];
				if (nexty == n && nextx == m)return;
				q[cnt].x = nextx;
				q[cnt++].y = nexty;
			}
		}
	}
	
}

int main() {
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	maze = (int**)malloc(sizeof(int*)*(n + 2));
	for (i = 0; i < n + 2; i++) {
		maze[i] = (int*)malloc(sizeof(int)*(m + 2));
	}

	for (i = 0; i < m + 2; i++) {
		maze[0][i] = 0;
		maze[n + 1][i] = 0;
	}
	for (i = 0; i < n + 2; i++) {
		maze[i][0] = 0;
		maze[i][m + 1] = 0;
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%1d", &maze[i][j]);
		}
	}

	BFS(n, m);
	printf("%d", maze[n][m]);
}