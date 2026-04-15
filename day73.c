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
