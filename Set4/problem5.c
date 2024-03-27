#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows for the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix: \n");

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if ((i==0&&(j<=n/2||j==n-1)) || (i<n/2&&(j==n/2||j==n-1)) || (i==n/2) || (i>n/2&&i!=(n-1)&&(j==0||j==n/2)) || (i==(n-1)&&(j==0||j>=n/2))){
                sum += matrix[i][j];
            }
        }
    }

    printf("\n%d\n", sum);

    return 0;
}