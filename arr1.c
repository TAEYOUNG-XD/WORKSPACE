#include <stdio.h>
int main(void)
{
    int arr[5][5] = {
        {5, 4, 6, 5, 0},
        {3, 6, 9, 3, 0},
        {4, 8, 2, 7, 0},
        {3, 8, 9, 7, 0},
        {0, 0, 0, 0, 0},
    };


    for (int i = 0 ; i < 4 ; i ++)
    {
        for (int j = 0 ; j < 4 ; j ++)
        {
        arr[j][4]=arr[j][4]+arr[j][i];
        }
    }
    
    for (int i = 0 ; i < 4  ; i ++)
    {
        for (int j = 0 ; j < 5 ; j ++)
        {
        arr[4][j]=arr[4][j]+arr[i][j];
        }
    }

    
        
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}