#include<stdio.h>
int main()
{
    double i=20000.4;
    double j=10000.2;
    int k=5;
    printf("%d\n",(int)i);    
    int a=(int)(i/j);
    printf("%d\n",a);
    printf("%f",(double)k);

    return 0;
}