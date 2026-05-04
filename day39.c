#include <stdio.h>
#include <string.h>

int heap[100];
int size = 0;

void insert(int x)
{
    int i = size++;
    heap[i] = x;

    while(i > 0 && heap[(i-1)/2] > heap[i])
    {
        int t = heap[i];
        heap[i] = heap[(i-1)/2];
        heap[(i-1)/2] = t;
        i = (i-1)/2;
    }
}

int extractMin()
{
    if(size == 0)
        return -1;

    int min = heap[0];
    heap[0] = heap[--size];

    int i = 0;

    while(1)
    {
        int l = 2*i + 1;
        int r = 2*i + 2;
        int s = i;

        if(l < size && heap[l] < heap[s]) s = l;
        if(r < size && heap[r] < heap[s]) s = r;

        if(s == i) break;

        int t = heap[i];
        heap[i] = heap[s];
        heap[s] = t;

        i = s;
    }

    return min;
}

int peek()
{
    if(size == 0) return -1;
    return heap[0];
}

int main()
{
    int n, x;
    char op[20];

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",op);

        if(strcmp(op,"insert")==0)
        {
            scanf("%d",&x);
            insert(x);
        }
        else if(strcmp(op,"extractMin")==0)
        {
            int r = extractMin();
            printf("%d\n",r);
        }
        else if(strcmp(op,"peek")==0)
        {
            printf("%d\n",peek());
        }
    }

    return 0;
}