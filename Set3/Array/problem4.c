#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the array elements: \n");

    for (int x=0; x<n; x++){
        scanf("%d", &array[x]);
    }

    int temp;

    // Swapping the elements

    for (int i=0, j=n-1; i<j; i++, j--){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    printf("Your array after reversing: \n");

    for (int x=0; x<n; x++){
        printf("%d ", array[x]);
    }

    printf("\n");

    return 0;
}