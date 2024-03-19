#include<stdio.h>

int main()
{
    char inp;

    for (int i=1;;i++){
        scanf(" %c", &inp);
        if (inp=='A')
            break;
        printf("Input %d: %c\n", i, inp);
    }
    return 0;
}