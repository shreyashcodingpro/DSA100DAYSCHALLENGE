#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int low = 0, high = n, mid;
    int ans = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(mid * mid == n) {
            ans = mid;
            break;
        }
        else if(mid * mid < n) {
            ans = mid;        // possible answer
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Integer square root: %d", ans);

    return 0;
}