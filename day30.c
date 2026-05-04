#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coef, exp;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp = NULL, *newnode;
    int n, c, e, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &c, &e);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->coef = c;
        newnode->exp = e;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;

    while(temp != NULL)
    {
        if(temp->exp == 0)
            printf("%d", temp->coef);
        else if(temp->exp == 1)
            printf("%dx", temp->coef);
        else
            printf("%dx^%d", temp->coef, temp->exp);

        if(temp->next != NULL)
            printf(" + ");

        temp = temp->next;
    }

    return 0;
}