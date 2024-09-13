#include<stdio.h>

int main(main) 
{

    int H, m;

    scanf("%d %d", &H, &m);

    if ((m - 45) < 0) {

        if (H != 0) {

            printf("%d %d",H-1,60+(m-45));

        }

        else {

            H=23;

            printf("%d %d",H,60+(m-45));

        }

    }

    else printf("%d %d", H, (m - 45));

    return 0;

}