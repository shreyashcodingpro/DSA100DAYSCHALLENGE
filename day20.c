#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    int prefix=0;
    int count=0;
    int freq[20001]={0};  
    int offset=10000;     

    for(int i=0; i<n; i++) {
        prefix+=arr[i];

        if(prefix==0)
            count++;

        if(freq[prefix+offset]>0)
            count+=freq[prefix+offset];

        freq[prefix+offset]++;
    }
    printf("%d",count);
    return 0;
}// Update Day 20 05/05/2026 00:24:30
// Update Day 20 05/05/2026 00:28:18
// Update Day 20 05/05/2026 00:33:15
// Update Day 20 05/05/2026 03:07:01
