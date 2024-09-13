#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
 
    printf("%d", a*(b%10));
    printf("%d", a*((b/10)%10));
    printf("%d", a*((b/100)%10));
    printf("%d", a*b);
                 
    return 0;
}