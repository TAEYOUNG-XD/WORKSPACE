#include <stdio.h>

int main(void)
{
    int arr[5];

    int* ptr0 = &arr[0];
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[2];
    int* ptr3 = &arr[3];
    int* ptr4 = &arr[4];

    for(int i=0 ; i < 5 ; i++)
    {
        arr[i]=i+1;
    }


    printf("%x\n", &ptr0);
    printf("%x\n", &ptr1);
    printf("%x\n", &ptr2);
    printf("%x\n", &ptr3);
    printf("%x\n", &ptr4);
    printf("========================\n");
    printf("%x\n", ptr0);
    printf("%x\n", ptr1);
    printf("%x\n", ptr2);
    printf("%x\n", ptr3);
    printf("%x\n", ptr4);
    printf("========================\n");
    printf("%x\n", ptr0);
    printf("%d\n", *ptr0);
    printf("%x\n", ptr0+1);
    printf("%d\n", *(ptr0+1));
    printf("%d\n", *(ptr0+2));

    return 0;
}