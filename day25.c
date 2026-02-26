#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    int n, i, key, count = 0;
    struct node *head = NULL, *temp = NULL, *newnode;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    scanf("%d", &key);
    temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            count++;
        }
        temp = temp->next;
    }
    printf("%d", count);
    return 0;
}// Update Day 25 05/05/2026 00:24:33
// Update Day 25 05/05/2026 00:28:22
// Update Day 25 05/05/2026 00:33:16
