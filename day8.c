#include<stdio.h>
int power(int a, int b){
    if (b==0)
        return 1;
    else
        return a * power(a, b-1);
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}
// Update Day 8 05/05/2026 00:24:22
// Update Day 8 05/05/2026 00:28:12
// Update Day 8 05/05/2026 00:33:13
