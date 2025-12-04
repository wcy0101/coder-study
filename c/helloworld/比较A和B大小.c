#include<stdio.h>
int main()
{
    int a;int b;
    printf("请输入两个数:");
    scanf("%d %d",&a,&b);
    int max;
    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("%d更大",max);
    

    return 0;
}