#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

int pop()
{
    struct node *temp = top;
    int x = temp->data;
    top = top->next;
    free(temp);
    return x;
}

int main()
{
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            push(str[i] - '0');
        }
        else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            int b = pop();
            int a = pop();
            int r;

            if(str[i] == '+') r = a + b;
            else if(str[i] == '-') r = a - b;
            else if(str[i] == '*') r = a * b;
            else r = a / b;

            push(r);
        }
        i++;
    }

    printf("%d", pop());

    return 0;
}// Update Day 34 05/05/2026 00:24:37
// Update Day 34 05/05/2026 00:28:26
// Update Day 34 05/05/2026 00:33:17
// Update Day 34 05/05/2026 03:07:03
