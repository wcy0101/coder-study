#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if (s<0||s>100)
    {
        printf("成绩无效");
    }
    if (90<=s<=100)
    {
        printf("A");
    }else if (80<s<90)
    {
        printf("B");
    }else if (70<s<80)
    {
        printf("C");
    }else if (60<s<70)
    {
        printf("D");
    }else
    {
        printf("E");
    }

    return 0;
}