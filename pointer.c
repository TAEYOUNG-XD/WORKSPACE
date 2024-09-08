#include <stdio.h>
int main(void)
{
    int num=7;
    int *pnum = &num;

    printf("%lx\n", pnum);
    printf("%lx\n", &num);
    printf("%d\n", *pnum);
    printf("%d\n", num);


    return 0;   
}
