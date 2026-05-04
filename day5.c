#include <stdio.h>
int main() {
    int p, q, i = 0, j = 0;

    printf("enter no. of entries in server 1: ");
    scanf("%d", &p);
    int A[p];
    printf("enter sorted arrival times of server 1:\n");
    for (int k = 0; k < p; k++) {
        scanf("%d", &A[k]);
    }
    printf("enter number of entries in server 2: ");
    scanf("%d", &q);
    int B[q];

    printf("enter sorted arrival times of server 2:\n");
    for (int k = 0; k < q; k++) {
        scanf("%d", &B[k]);
    }
    printf("merged chronological log:\n");

    while (i < p && j < q) {
        if (A[i] <= B[j]) {
            printf("%d ", A[i]);
            i++;
        } else {
            printf("%d ", B[j]);
            j++;
        }
    }
    while (i < p) {
        printf("%d ", A[i]);
        i++;}
    while (j < q) {
        printf("%d ", B[j]);
        j++;}
    return 0;
}
