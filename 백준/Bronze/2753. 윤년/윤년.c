#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    
    int year;

    scanf("%d", &year);

    if (year % 4==0)
    {
        if (year % 100==0)
        {
            if (year % 400==0)
                printf("%d",year%400==0);
            else
                printf("%d",year%400==0);
        }
        else
            printf("%d",!(year%100==0));
    }
    else
        printf("%d",year%4==0);


    return 0;
}