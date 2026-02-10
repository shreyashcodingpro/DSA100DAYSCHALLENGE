#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,len;

    scanf("%s", s);     
    len=strlen(s);   

    for (i=len - 1; i>=0; i--) {
        printf("%c", s[i]);  
    }
    return 0;
}
// Update Day 9 05/05/2026 00:24:23
// Update Day 9 05/05/2026 00:28:13
