#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int visited[26] = {0};

    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++) {
        int index = s[i] - 'a';

        if(visited[index] == 1) {
            printf("%c", s[i]);
            return 0;
        }

        visited[index] = 1;
    }

    printf("-1");

    return 0;
}// Update Day 72 05/05/2026 00:24:55
// Update Day 72 05/05/2026 00:28:42
// Update Day 72 05/05/2026 00:33:22
// Update Day 72 05/05/2026 03:07:11
