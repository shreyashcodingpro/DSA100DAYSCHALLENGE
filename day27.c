#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head,int x){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=x; 
    n->next=NULL;
    if(head==NULL) return n;
    struct Node* t=head;
    while(t->next) t=t->next;
    t->next=n;
    return head;
}

int main(){
    int n,m,x,i;
    struct Node *h1=NULL,*h2=NULL;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        h1=insert(h1,x);
    }

    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&x);
        h2=insert(h2,x);
    }

    struct Node *t1=h1,*t2;

    while(t1){
        t2=h2;
        while(t2){
            if(t1->data==t2->data){
                printf("%d",t1->data);
                return 0;
            }
            t2=t2->next;
        }
        t1=t1->next;
    }

    printf("No Intersection");
    return 0;
}