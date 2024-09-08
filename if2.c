#include <stdio.h>
int main(void)
{
    int kor,eng,math;
    int grade;

    printf("국어 성적 : ");
    scanf("%d", &kor);
    printf("영어 성적 : ");
    scanf("%d", &eng);
    printf("수학 성적 : \n");
    scanf("%d", &math);

    grade=(kor+eng+math)/3;

    if(grade>=90)
        printf("A");
    else if(grade>=80)
        printf("B");
    else if(grade>=70)
        printf("C");
    else if(grade>=50)
        printf("D");
        
    else
        printf("F");

    
        

    return 0;
}