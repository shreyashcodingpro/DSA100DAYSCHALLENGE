#include <stdio.h>
#include <string.h>

#define SIZE 100

int table[SIZE];

// Initialize hash table
void init(int m) {
    for(int i = 0; i < m; i++)
        table[i] = -1;
}

// Insert using quadratic probing
void insert(int key, int m) {
    int i = 0;
    int index;

    while(i < m) {
        index = (key % m + i*i) % m;

        if(table[index] == -1) {
            table[index] = key;
            return;
        }
        i++;
    }
}

// Search using quadratic probing
void search(int key, int m) {
    int i = 0;
    int index;

    while(i < m) {
        index = (key % m + i*i) % m;

        if(table[index] == key) {
            printf("FOUND\n");
            return;
        }

        if(table[index] == -1) {
            break;
        }

        i++;
    }

    printf("NOT FOUND\n");
}

int main() {
    int m, q;
    char op[10];
    int key;

    scanf("%d", &m);
    scanf("%d", &q);

    init(m);

    for(int i = 0; i < q; i++) {
        scanf("%s %d", op, &key);

        if(strcmp(op, "INSERT") == 0) {
            insert(key, m);
        }
        else if(strcmp(op, "SEARCH") == 0) {
            search(key, m);
        }
    }

    return 0;
}