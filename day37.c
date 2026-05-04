#include <stdio.h>
#include <string.h>

int main()
{
    int pq[100], size = 0;
    int n, x, i, min, pos;
    char op[10];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%s", op);

        if(strcmp(op, "insert") == 0)
        {
            scanf("%d", &x);
            pq[size++] = x;
        }
        else if(strcmp(op, "delete") == 0)
        {
            if(size == 0)
                printf("-1\n");
            else
            {
                min = pq[0];
                pos = 0;

                for(int j = 1; j < size; j++)
                {
                    if(pq[j] < min)
                    {
                        min = pq[j];
                        pos = j;
                    }
                }

                printf("%d\n", min);

                for(int j = pos; j < size - 1; j++)
                    pq[j] = pq[j + 1];

                size--;
            }
        }
        else if(strcmp(op, "peek") == 0)
        {
            if(size == 0)
                printf("-1\n");
            else
            {
                min = pq[0];
                for(int j = 1; j < size; j++)
                    if(pq[j] < min)
                        min = pq[j];

                printf("%d\n", min);
            }
        }
    }

    return 0;
}