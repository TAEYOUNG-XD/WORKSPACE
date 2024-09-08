#include <stdio.h>

int main(void)
{
    
    int arr[5];

    for(int i=0; i<5; i++)
    {
        printf("정수를 입력하시오 : \n");
        scanf("%d", &arr[i]);
    }

    int min=10000;
    int max=0;
    int total=0;

    for( int i=0; i<5 ; i++)
    {
        total=total+arr[i];

        if(min > arr[i])
        {min = arr[i];}

        if(max < arr[i])
        {max = arr[i];}

    }


    printf("총 합 : %d\n", total);
    printf("최대값 : %d\n", max);
    printf("최소값 : %d\n", min);


    return 0;
} 