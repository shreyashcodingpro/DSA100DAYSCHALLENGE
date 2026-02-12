#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Update Day 11 05/05/2026 00:24:24
// Update Day 11 05/05/2026 00:28:13
// Update Day 11 05/05/2026 00:33:13
