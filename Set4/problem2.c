#include<stdio.h>

int main()
{
    int matrix[3][3];

    printf("Enter elements of the 3x3 matrix: \n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1]) - matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0]) + matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]);

    printf("%d\n", det);

    return 0;
}