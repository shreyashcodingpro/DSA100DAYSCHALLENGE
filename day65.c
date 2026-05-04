#include <stdio.h>

int dfs(int n, int adj[n][n], int visited[], int node, int parent) {
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i] == 1) {

            if (visited[i] == 0) {
                if (dfs(n, adj, visited, i, node)) {
                    return 1;
                }
            }
            else if (i != parent) {
                return 1;
            }
        }
    }

    return 0;
}

int hasCycle(int n, int adj[n][n]) {
    int visited[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            if (dfs(n, adj, visited, i, -1)) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int adj[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    if (hasCycle(n, adj)) {
        printf("Cycle present\n");
    } else {
        printf("No cycle\n");
    }

    return 0;
}