#include<stdio.h>
int main()
{
    int a,b;     
    scanf("%d %d",&a,&b);
    int c=a;
    int d=b; 
    int t;
    do
    {
       t=c%d;
       c=d;
       d=t;
    } while (d>0);
    printf("%d和%d的最大公约数是%d",a,b,c);
    

    return 0;
}