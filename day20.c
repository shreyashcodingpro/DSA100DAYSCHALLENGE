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
}