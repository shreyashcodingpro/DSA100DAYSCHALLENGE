#include <stdio.h>

int main()
{
    int q[100], stack[100];
    int n, i, top = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &q[i]);

    for(i = 0; i < n; i++)
        stack[++top] = q[i];

    for(i = 0; i < n; i++)
        q[i] = stack[top--];

    for(i = 0; i < n; i++)
        printf("%d ", q[i]);

    return 0;
}