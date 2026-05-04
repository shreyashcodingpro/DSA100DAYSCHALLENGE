#include <stdio.h>
#include <string.h>

int main()
{
    int dq[100], front = -1, rear = -1;
    int n, x;
    char op[20];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", op);

        if(strcmp(op,"push_front")==0)
        {
            scanf("%d",&x);
            if(front == -1)
            {
                front = rear = 0;
                dq[front] = x;
            }
            else
            {
                front--;
                dq[front] = x;
            }
        }
        else if(strcmp(op,"push_back")==0)
        {
            scanf("%d",&x);
            if(front == -1)
            {
                front = rear = 0;
                dq[rear] = x;
            }
            else
            {
                rear++;
                dq[rear] = x;
            }
        }
        else if(strcmp(op,"pop_front")==0)
        {
            if(front == -1 || front > rear)
                printf("-1\n");
            else
                front++;
        }
        else if(strcmp(op,"pop_back")==0)
        {
            if(front == -1 || front > rear)
                printf("-1\n");
            else
                rear--;
        }
        else if(strcmp(op,"front")==0)
        {
            if(front == -1 || front > rear)
                printf("-1\n");
            else
                printf("%d\n", dq[front]);
        }
        else if(strcmp(op,"back")==0)
        {
            if(front == -1 || front > rear)
                printf("-1\n");
            else
                printf("%d\n", dq[rear]);
        }
        else if(strcmp(op,"size")==0)
        {
            if(front == -1 || front > rear)
                printf("0\n");
            else
                printf("%d\n", rear-front+1);
        }
        else if(strcmp(op,"empty")==0)
        {
            if(front == -1 || front > rear)
                printf("1\n");
            else
                printf("0\n");
        }
    }

    for(int i = front; i <= rear; i++)
        printf("%d ", dq[i]);

    return 0;
}