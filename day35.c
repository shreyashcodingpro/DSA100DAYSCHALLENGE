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
}