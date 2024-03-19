#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    int array[n], sum=0;
    printf("Enter the array elements: \n");

    for (int x=0; x<n; x++){
        scanf("%d", &array[x]);
    }

    for (int i=0; i<n; i++){
        sum+=array[i];
    }

    printf("The sum of your array elements is: %d\n", sum);

    return 0;
}