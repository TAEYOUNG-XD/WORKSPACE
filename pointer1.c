#include <stdio.h>
int main(void)
{
    int num1=10;
    int num2=20;

    int* ptr1=&num1;
    int* ptr2=&num2;
    printf("%d %d\n", *ptr1, *ptr2);
    printf("%d %d\n", num1, num2);
    printf("%x %x\n", ptr1, ptr2);

    ptr1=&num2;
    ptr2=&num1;

    printf("%d %d\n", *ptr1, *ptr2);
    printf("%d %d\n", num1, num2);
    printf("%x %x\n", ptr1, ptr2);

    return 0;
}