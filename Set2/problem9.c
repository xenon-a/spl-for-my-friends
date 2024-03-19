#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a=1, b=0, next;

    for (int i=1; i<n; i++){
        next = a+b;
        printf("%d, ", next);
        a = b;
        b = next;
    }

    printf("%d\n", a+b);

    return 0;
}