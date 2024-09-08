#include <stdio.h>

int main(void)
{
    int num=1;
    int i=1;
    for( ; i<100 ; i++)
    {
        if(num%7==0 || num%9==0)
            printf("%d\n", num);
        num++;
    }    

    return 0;

}