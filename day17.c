#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    printf("max: %d\n", max);
    printf("min: %d\n", min);
    return 0;
}
// Update Day 17 05/05/2026 00:24:27
// Update Day 17 05/05/2026 00:28:16
