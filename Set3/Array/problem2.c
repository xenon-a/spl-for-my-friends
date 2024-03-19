#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    int array1[n], array2[n];

    printf("Enter the array elements: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &array1[i]);
    }

    for (int j=0; j<=5; j++){
        array2[j] = array1[j];
    }

    printf("The elements in array 2 are as follows: \n");
    for (int k = 0; k<n; k++){
        printf("%d ", array2[k]);
    }

    printf("\n");
    return 0;
}