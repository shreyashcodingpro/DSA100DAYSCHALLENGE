#include <stdio.h>

int dfs(int n, int adj[n][n], int visited[], int recStack[], int node) {
    visited[node] = 1;
    recStack[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i] == 1) {

            if (visited[i] == 0) {
                if (dfs(n, adj, visited, recStack, i)) {
                    return 1;
                }
            }
            else if (recStack[i] == 1) {
                return 1;
            }
        }
    }

    recStack[node] = 0;
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

    int visited[n], recStack[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        recStack[i] = 0;
    }

    int hasCycle = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            if (dfs(n, adj, visited, recStack, i)) {
                hasCycle = 1;
                break;
            }
        }
    }

    if (hasCycle) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}