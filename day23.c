#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* link;
};

struct node* createList(int n) {
    struct node *head = NULL, *temp = NULL, *newnode;
    int i;

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
    return head;
}

struct node* merge(struct node* head1, struct node* head2) {

    struct node dummy;   
    struct node* temp = &dummy;
    dummy.link = NULL;

    while(head1 != NULL && head2 != NULL) {
        if(head1->data < head2->data) {
            temp->link = head1;
            head1 = head1->link;
        } else {
            temp->link = head2;
            head2 = head2->link;
        }
        temp = temp->link;
    }

    if(head1 != NULL)
        temp->link = head1;
    else
        temp->link = head2;

    return dummy.link;
}

int main() {
    int n, m;

    scanf("%d", &n);
    struct node* head1 = createList(n);

    scanf("%d", &m);
    struct node* head2 = createList(m);

    struct node* merged = merge(head1, head2);

    while(merged != NULL) {
        printf("%d ", merged->data);
        merged = merged->link;
    }

    return 0;
}