#include <stdio.h>

int main()
{
    int stack[100], top = -1;
    int n, m, x, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        if(top != -1)
            top--;
    }

    for(i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    return 0;
}// Update Day 32 05/05/2026 00:24:36
// Update Day 32 05/05/2026 00:28:25
// Update Day 32 05/05/2026 00:33:17
// Update Day 32 05/05/2026 03:07:03
// Update Day 32 05/05/2026 03:08:55
