#include<stdio.h>

int main()
{
    int units;
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    float bill = 0;

    if (units<=50)

        bill = units * 0.5;

    else {

        bill += 50 * 0.5;
        units -= 50;

        if (units>0){

            if (units>100)
                bill += 100 * 0.75;
            else
                bill += units * 0.75;

            units -= 100;

            if (units>0){

                if (units > 100)
                    bill += 100 * 1.2;
                else
                    bill += units * 1.2;

                units -= 100;

                if (units>0)
                    bill += units * 1.5;
            }
        }
    }

    printf("%.2f\n", bill*1.2);

    return 0;
}