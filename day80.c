#include <stdio.h>

#define INF 1000000   // large value to represent infinity

int main() {
    int n;
    scanf("%d", &n);

    int dist[n][n];

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &dist[i][j]);

            // Convert -1 to INF (no edge)
            if(dist[i][j] == -1 && i != j) {
                dist[i][j] = INF;
            }
        }
    }

    // Floyd-Warshall Algorithm
    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(dist[i][j] == INF)
                printf("-1 ");
            else
                printf("%d ", dist[i][j]);
        }
        printf("\n");
    }

    return 0;
}// Update Day 80 05/05/2026 00:24:57
// Update Day 80 05/05/2026 00:28:46
// Update Day 80 05/05/2026 00:33:24
// Update Day 80 05/05/2026 03:07:13
