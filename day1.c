#include <stdio.h>
int main() {
    int n, pos, x;
    int a[100];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &pos);
    scanf("%d", &x);

    if (pos < 1 || pos > n + 1) {
        return 0;
    }
    for (i = n - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = x;

    for (i = 0; i < n + 1; i++) {
        printf("%d", a[i]);
        if (i != n)
            printf(" ");
    }
    return 0;
}