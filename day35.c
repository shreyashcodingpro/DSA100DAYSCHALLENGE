#include <stdio.h>

int main()
{
    int queue[100];
    int front = 0, rear = -1;
    int n, i, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        rear++;
        queue[rear] = x;
    }

    for(i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}// Update Day 35 05/05/2026 00:24:38
// Update Day 35 05/05/2026 00:28:27
// Update Day 35 05/05/2026 00:33:17
// Update Day 35 05/05/2026 03:07:04
// Update Day 35 05/05/2026 03:08:55
