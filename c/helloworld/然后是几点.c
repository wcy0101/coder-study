#include<stdio.h>
int main()
{
    int a;int b;
    scanf("%d %d",&a,&b);
    printf("%d点%d分",a/100+b/60+(a%100+b%60)/60,(a%100+b%60)%60);

    return 0;
}