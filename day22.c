#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int main() {
    int n, i;
    scanf("%d", &n);

    struct node *head = NULL, *temp = NULL, *newnode = NULL;

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->link = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->link = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    return 0;
}