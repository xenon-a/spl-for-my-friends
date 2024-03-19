#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements for your array: \n");
    scanf("%d", &n);

    int array[n];

    printf("Enter the array elements: \n");

    for (int c=0; c<n; c++){
        scanf("%d", &array[c]);
    }

    int max=array[0], min=array[0];

    for (int x=0; x<n; x++){
        if (array[x] > max){
            max = array[x];
        }
        else if (array[x] < min) {
            min = array[x];
        }
    }

    printf("The maximum element is %d\n", max);
    printf("The minimum element is %d\n", min);

    return 0;
}