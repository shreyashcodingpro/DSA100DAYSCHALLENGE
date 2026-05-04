#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int n, m;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &m);

    int adj[MAX][MAX] = {0};
    int indegree[MAX] = {0};

    // Input edges
    printf("Enter edges (u v):\n");
    for(int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
    }

    // Calculate indegree
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(adj[i][j] == 1) {
                indegree[j]++;
            }
        }
    }

    // Queue
    int queue[MAX];
    int front = 0, rear = 0;

    // Push nodes with indegree 0
    for(int i = 0; i < n; i++) {
        if(indegree[i] == 0) {
            queue[rear++] = i;
        }
    }

    printf("Topological Order: ");

    // Kahn's Algorithm
    while(front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for(int i = 0; i < n; i++) {
            if(adj[node][i] == 1) {
                indegree[i]--;
                if(indegree[i] == 0) {
                    queue[rear++] = i;
                }
            }
        }
    }

    return 0;
}