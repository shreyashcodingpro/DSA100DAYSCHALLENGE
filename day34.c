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
}