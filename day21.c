#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    int n, i;
    struct node *head=NULL, *temp=NULL, *newnode=NULL;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) {
            head=newnode;
            temp=newnode;
        } else {
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    return 0;
}// Update Day 21 05/05/2026 00:24:31
// Update Day 21 05/05/2026 00:28:18
// Update Day 21 05/05/2026 00:33:15
