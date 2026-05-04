#include <stdio.h>

void dfs(int n, int adj[n][n], int visited[], int s) {
    printf("%d ", s);
    visited[s] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[s][i] == 1 && visited[i] == 0) {
            dfs(n, adj, visited, i);
        }
    }
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

    int s;
    scanf("%d", &s);

    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    dfs(n, adj, visited, s);

    return 0;
}