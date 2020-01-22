#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

typedef struct node* nodePointer;
typedef struct node {
	int vertex;
	nodePointer link;
}node;
node** G;
int* visited;
int dfs(int i, int j);
void push(int, int);

int main(void)
{
	int n;
	int i, j, k;

	scanf("%d", &n);
	
	G = (nodePointer*)malloc(sizeof(nodePointer)*n);
	visited = (int*)malloc(sizeof(int)*n);

	for (i = 0;i < n;i++)
	{
		G[i] = NULL;
		visited[i] = FALSE;
		for (j = 0;j < n;j++)
		{
			scanf("%d", &k);

			if (k == 1)
				push(i, j);
		}
	}

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			for (k = 0;k < n;k++)
				visited[k] = FALSE;
			k = dfs(i, j);
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}

void push(int u, int v)
{
	nodePointer newlist = (nodePointer)malloc(sizeof(node));
	nodePointer travel;
	newlist->vertex = v;
	newlist->link = NULL;

	if (G[u] == NULL)
		G[u] = newlist;

	else
	{
		travel = G[u];
		while (travel->link != NULL)
		{
			travel = travel->link;
		}
		travel->link = newlist;
	}
}

int dfs(int i, int j)
{
	nodePointer w;
	int tf=0;
	visited[i] = TRUE;
	for (w = G[i];w;w = w->link)
	{
		if (w->vertex == j)
			return TRUE;
		else if(!visited[w->vertex])
		{
			tf = dfs(w->vertex, j);
			if (tf == 1)
				break;
		}
	}
	if (tf == 1)
		return TRUE;
	return FALSE;
}
