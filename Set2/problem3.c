#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int i;

    for (i = 1; i<n; i++){
        i%2?printf("1, "):printf("0, ");
    }

    i%2?printf("1\n"):printf("0\n");

    return 0;
}