#include <stdio.h>
int visited[1001] = { 0 };

typedef struct {
	int vertex;
	struct Node* next;
}Node;

Node** graph;

void addNode(int x, int y) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->vertex = y;
	newnode->next = NULL;
	if (graph[x]->next == NULL) graph[x]->next = newnode;
	else {
		Node* cur = graph[x]->next;
		if (cur->vertex == y) {
			free(newnode);
			return;
		}
		if (cur->vertex > y) {
			newnode->next = cur;
			graph[x]->next = newnode;
			return;
		}
		Node* curnext = cur->next;
		while (curnext!=NULL) {
			if (curnext->vertex < y) {
				cur = cur->next;
				curnext = curnext->next;
			}
			else break;
		}
		newnode->next = cur->next;
		cur->next = newnode;
	}
}

void DFS(int v) {
	if (visited[v])return;
	visited[v] = 1;
	printf("%d ", v);
	Node* cur = graph[v]->next;
	while (cur != NULL) {
		DFS(cur->vertex);
		cur = cur->next;
	}
}

void BFS(int v) {
	int queue[1000],cnt=0,cursor=0;
	visited[v] = 1;
	printf("%d ", v);
	queue[cnt++] = v;
	while (cursor<cnt) {
		Node* cur = graph[v]->next;
		while (cur != NULL) {
			if (!visited[cur->vertex]) {
				visited[cur->vertex] = 1;
				printf("%d ",cur->vertex);
				queue[cnt++] = cur->vertex;
			}
			cur = cur->next;
		}
		cursor++;
		if(cursor<1000)v = queue[cursor];
	}
}

int main() {
	int n, m, v,i;
	int x, y;
	scanf("%d %d %d", &n, &m, &v);
	graph = (Node**)malloc(sizeof(Node*)*(n+1));
	for (i = 0; i < n+1; i++) {
		graph[i] = (Node*)malloc(sizeof(Node));
		graph[i]->next = NULL;
	}
	for (i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		addNode(x, y);
		addNode(y, x);
	}
	DFS(v);
	for (i = 0; i < n + 1; i++) visited[i] = 0;
	printf("\n");
	BFS(v);
}