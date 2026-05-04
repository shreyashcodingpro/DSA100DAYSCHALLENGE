#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char names[100][50];   // to store input names
    char unique[100][50];  // to store unique names
    int count[100] = {0};  // to store vote count

    // input names
    for(int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    int k = 0; // number of unique names

    // count votes
    for(int i = 0; i < n; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(strcmp(names[i], unique[j]) == 0) {
                count[j]++;
                found = 1;
                break;
            }
        }

        if(!found) {
            strcpy(unique[k], names[i]);
            count[k] = 1;
            k++;
        }
    }

    // find winner
    int maxVotes = count[0];
    char winner[50];
    strcpy(winner, unique[0]);

    for(int i = 1; i < k; i++) {
        if(count[i] > maxVotes) {
            maxVotes = count[i];
            strcpy(winner, unique[i]);
        }
        else if(count[i] == maxVotes) {
            // lexicographically smaller
            if(strcmp(unique[i], winner) < 0) {
                strcpy(winner, unique[i]);
            }
        }
    }

    // output
    printf("%s %d", winner, maxVotes);

    return 0;
}