#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    switch (x>y){
    case 1:
        for (int i=x; i>y; i--){
            printf("%d, ", i*i);
        }
        break;
    default:
        for (int i=x; i<y; i++){
            printf("%d, ", i*i);
        }
        break;
    }

    printf("Reached!\n");

    return 0;

}