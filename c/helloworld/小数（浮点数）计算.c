#include<stdio.h>

int main()
{
    double inch;
    double foot;

    printf("请输入英尺和英寸：");
    scanf("%lf %lf",&inch,&foot);
    printf("你的身高是:%f",(foot+inch/12)*0.3048);

    return 0;
}