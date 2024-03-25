#include<stdio.h>

int main()
{
    int m, n;
    printf("Enter row and column for the 2D array: \n");
    scanf("%d%d", &m, &n);

    int array[m][n];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &array[i][j]);
        }
    }

    printf("Row wise: ");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ", array[i][j]);
        }
    }
    printf("\n");

    printf("Column wise: ");
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", array[j][i]);
        }
    }
    printf("\n");

    return 0;
}