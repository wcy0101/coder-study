#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double sum=0.0;
    int i;
    int sign=1;
    for(i=1;i<=n;i++)
    {
     sum+=sign*1.0/i;
     sign=-sign;
    }

    printf("f(%d)=%f",n,sum*1.0);


    return 0;
}