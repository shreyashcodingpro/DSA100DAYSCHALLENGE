#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top = -1;

void dfs(int n, int node) {
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i] == 1 && !visited[i]) {
            dfs(n, i);
        }
    }

    stack[++top] = node;
}

void topoSort(int n) {
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(n, i);
        }
    }

    while (top != -1) {
        printf("%d ", stack[top--]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    topoSort(n);

    return 0;
}// Update Day 67 05/05/2026 00:24:53
// Update Day 67 05/05/2026 00:28:40
// Update Day 67 05/05/2026 00:33:22
// Update Day 67 05/05/2026 03:07:10
// Update Day 67 05/05/2026 03:09:01
