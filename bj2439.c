#include <stdio.h>

int main(void){
    int star;
    scanf("%d", &star);
    for(int i = 1; i<=star; i++){
        for(int j=i; j<star; j++){
            printf(" ");
        }
        for(int d=1; d<=i; d++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
