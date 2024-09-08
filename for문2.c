#include <stdio.h>

int main(void)
{
    double total=0.0;
    double mean=0.0;
    double input=0.0;
    int num= 0;

    for ( ; input>=0.0 ; )
    {
        total+=input;
        printf("실수 입력(minus to quit) : ");
        scanf("%lf" ,&input);
        num++;

    }
    mean = total/(num-1);
    printf("합계 : %f \n", total);
    printf("평균 : %f \n", mean);
    return 0;
}