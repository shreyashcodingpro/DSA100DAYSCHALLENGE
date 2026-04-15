#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[26] = {0};

    scanf("%s", s);

    // Count frequency
    for(int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;
    }

    // Find first non-repeating character
    for(int i = 0; i < strlen(s); i++) {
        if(freq[s[i] - 'a'] == 1) {
            printf("%c", s[i]);
            return 0;
        }
    }

    // If all characters repeat
    printf("$");

    return 0;
}// Update Day 73 05/05/2026 00:24:55
// Update Day 73 05/05/2026 00:28:42
// Update Day 73 05/05/2026 00:33:23
// Update Day 73 05/05/2026 03:07:11
// Update Day 73 05/05/2026 03:09:02
