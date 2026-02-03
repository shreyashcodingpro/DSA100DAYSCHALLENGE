#include <stdio.h>
int main() {
    int n, pos;
    int a[100];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    for (i = 0; i < n - 1; i++) {
        printf("%d", a[i]);
        if (i != n - 2)
            printf(" ");
    }
    return 0;
}// Update Day 2 05/05/2026 00:24:20
// Update Day 2 05/05/2026 00:28:11
// Update Day 2 05/05/2026 00:33:12
// Update Day 2 05/05/2026 03:06:57
// Update Day 2 05/05/2026 03:08:49
