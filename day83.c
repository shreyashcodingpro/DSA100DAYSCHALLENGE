#include <stdio.h>

int main() {
    int n, i, j, min_index, temp;

    // input size
    scanf("%d", &n);

    int arr[n];

    // input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // selection sort
    for(i = 0; i < n - 1; i++) {
        min_index = i;

        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // swap
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    // print sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}