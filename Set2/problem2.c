#include<stdio.h>

int main()
{
    int c, i;
    printf("Number of terms: ");
    scanf("%d", &c);

    for (i=1; i<c; i++){
        printf("%d, ", 2*i-1);
    }
    printf("%d\n", 2*i-1);

    return 0;
}