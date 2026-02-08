#include<stdio.h>
int fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}
// Update Day 7 05/05/2026 00:24:21
// Update Day 7 05/05/2026 00:28:12
// Update Day 7 05/05/2026 00:33:13
