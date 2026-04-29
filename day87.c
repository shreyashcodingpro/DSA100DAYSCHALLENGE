#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting (Bubble Sort - easy to understand)
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}// Update Day 87 05/05/2026 00:25:00
// Update Day 87 05/05/2026 00:28:48
// Update Day 87 05/05/2026 00:33:25
// Update Day 87 05/05/2026 03:07:15
// Update Day 87 05/05/2026 03:09:05
