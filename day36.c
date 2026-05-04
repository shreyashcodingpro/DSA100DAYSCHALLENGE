#include <stdio.h>

int main()
{
    int q[100];
    int front = 0, rear = -1;
    int n, m, i, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        rear = (rear + 1) % 100;
        q[rear] = x;
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        front = (front + 1) % 100;
    }

    int count = n - m;

    for(i = 0; i < count; i++)
    {
        int idx = (front + i) % 100;
        printf("%d ", q[idx]);
    }

    return 0;
}