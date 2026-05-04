#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0, maxLen = 0;

    // Simple hashmap using array
    int hash[1000];
    for (int i = 0; i < 1000; i++)
        hash[i] = -1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Case 1: if sum = 0
        if (sum == 0) {
            maxLen = i + 1;
        }

        // Case 2: if sum seen before
        if (hash[sum + 500] != -1) {
            int len = i - hash[sum + 500];
            if (len > maxLen)
                maxLen = len;
        } else {
            hash[sum + 500] = i; // store first occurrence
        }
    }

    printf("Length of longest subarray with sum 0 = %d", maxLen);

    return 0;
}