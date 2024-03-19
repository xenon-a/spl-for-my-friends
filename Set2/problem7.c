#include<stdio.h>


int main()
{
    int num, reversed=0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while(num){
        reversed = reversed * 10 + num%10;
        num /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}