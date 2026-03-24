#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if (s<0||s>100)
    {
        printf("成绩无效");
    }
    s/=10;
    switch (s)
    {
    case 10:
    case 9:
    printf("A");
    break;
    case 8:
    printf("B");
    break;
    case 7:
    printf("C");
    break;
    case 6:
    printf("D");
    break;
    default:
    printf("E");
    break;
    }

    return 0;
}