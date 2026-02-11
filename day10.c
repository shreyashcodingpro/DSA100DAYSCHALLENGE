#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i = 0,j;

    scanf("%s", s);
    j=strlen(s) - 1;
    while (i<j){
        if (s[i] != s[j]) {
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");
    return 0;
}
// Update Day 10 05/05/2026 00:24:23
// Update Day 10 05/05/2026 00:28:13
