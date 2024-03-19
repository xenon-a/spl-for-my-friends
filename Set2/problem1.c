#include<stdio.h>

int main()
{
    int m, i;
    printf("Number of terms: ");
    scanf("%d", &m);
    for (i = 1; i<m; i++){
        printf("%d, ", i);
    }
    printf("%d\n", i);
    return 0;
}