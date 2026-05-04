#include <stdio.h>

// Function to check if allocation is possible
int isPossible(int books[], int n, int m, int maxPages) {
    int students = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        // If a single book has more pages than maxPages
        if (books[i] > maxPages)
            return 0;

        if (pagesSum + books[i] <= maxPages) {
            pagesSum += books[i];
        } else {
            students++;
            pagesSum = books[i];

            if (students > m)
                return 0;
        }
    }

    return 1;
}

// Function to find minimum maximum pages
int allocateBooks(int books[], int n, int m) {
    int sum = 0, max = 0;

    for (int i = 0; i < n; i++) {
        sum += books[i];
        if (books[i] > max)
            max = books[i];
    }

    int low = max;
    int high = sum;
    int ans = sum;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(books, n, m, mid)) {
            ans = mid;
            high = mid - 1; // try smaller max
        } else {
            low = mid + 1;  // increase limit
        }
    }

    return ans;
}

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    int books[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }

    printf("%d\n", allocateBooks(books, n, m));

    return 0;
}