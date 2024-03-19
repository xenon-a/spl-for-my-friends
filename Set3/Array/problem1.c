#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    int my_array[n];

    printf("Enter the array elements: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &my_array[i]);
    }

    printf("You entered the following array elements: \n");

    for (int i=0; i<n; i++){
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}