#include <stdio.h>
int main(void)
{
    int A,year;

    scanf("%d" , &year);

    if (year%400==0)
    {
        A=1;
    }
    
    else if (year%100==0)
    {
        A=0;
    }

    else if (year%4==0)
    {
        A=1;
    }

    else A = 0;

    printf("%d \n", A);

    return 0;
}