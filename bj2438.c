#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d",&T);
    
    for(int i=1 ; i<=T ; i++){
        for(int y=0 ; y<i ; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}