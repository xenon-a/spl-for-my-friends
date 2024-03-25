#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square matrix: \n");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the %dx%d matrix: \n", n, n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMajor Diagonal: ");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\nMinor Diagonal: ");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                printf("%d ", matrix[i][n-j-1]);
            }
        }
    }

    printf("\n");

    return 0;

}