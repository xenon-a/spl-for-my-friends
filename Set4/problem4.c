#include<stdio.h>

int main()
{
    int matrix_a[3][3], matrix_b[3][3];

    printf("Enter the first 3x3 matrix \n");

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("Enter the second 3x3 matrix \n");

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &matrix_b[i][j]);
        }
    }


    int matrix_c[3][3] = {{0,0,0},
                          {0,0,0},
                          {0,0,0}};

    for (int k=0; k<3; k++){
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                matrix_c[i][k] += matrix_a[i][j] * matrix_b[j][i];
            }
        }
    }

    printf("Multiplying two matrices: \n");

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ", matrix_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}