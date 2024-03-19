#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    int array1[n];

    printf("Enter the array elements: \n");

    for (int x=0; x<n; x++){
        scanf("%d", &array1[x]);
    }

    int reversed_array[n], index=0;

    for (int i=n-1; i>=0; i--){
        reversed_array[index] = array1[i];
        index++;
    }

    printf("Your array after reversing: \n");

    for (int i=0; i<n; i++){
        printf("%d ", reversed_array[i]);
    }

    printf("\n");

    return 0;
}