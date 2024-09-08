#include <stdio.h>

int main(void)
{
    int arr1[3][4];
    



    for(int i=0 ; i < 3 ; i++)
    {
        for(int j=0 ; j < 4 ; j++)
        {
            arr1[i][j]=i*10+j;
            
            printf("%d\n", arr1[i][j]);
        }
    }
    

        printf("%d", sizeof(arr1));

    return 0;
}