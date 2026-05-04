#include <stdio.h>
int main() {
    int n, i, temp;
    int a[50];

    printf("enter no. of elements: ");
    scanf("%d", &n);

    printf("enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    i = 0;
    int j = n - 1;
    while(i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
