#include <stdio.h>

#define MAX 100
#define INF 999999

int main() {
    int n, m;
    
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &m);

    int graph[MAX][MAX];

    // Initialize graph
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    printf("Enter edges (u v w):\n");
    for(int i = 0; i < m; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w; // remove if directed
    }

    int src;
    printf("Enter source: ");
    scanf("%d", &src);

    int dist[MAX];
    int visited[MAX];

    // Initialize
    for(int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;

    // Dijkstra
    for(int count = 0; count < n - 1; count++) {
        int min = INF, u = -1;

        // Find minimum distance node
        for(int i = 0; i < n; i++) {
            if(!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        if(u == -1) break;

        visited[u] = 1;

        // Update neighbors
        for(int v = 0; v < n; v++) {
            if(!visited[v] && graph[u][v] != 0 &&
               dist[u] + graph[u][v] < dist[v]) {
                   
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Output
    printf("\nShortest distances:\n");
    for(int i = 0; i < n; i++) {
        printf("Node %d = %d\n", i, dist[i]);
    }

    return 0;
}