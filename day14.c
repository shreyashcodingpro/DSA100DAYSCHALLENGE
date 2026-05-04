#include <stdio.h>
int main() {
    int n;
    printf("enter size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    
    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isIdentity=1;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) {
                if(matrix[i][j]!=1) {
                    isIdentity=0;
                    break;
                }
            } else {
                if(matrix[i][j]!=0) {
                    isIdentity=0;
                    break;
                }
            }
        }
    }

    if(isIdentity==1)
        printf("identity matrix");
    else
        printf("not identity matrix");
    return 0;
}
