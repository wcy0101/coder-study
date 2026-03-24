#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i;
    int isprime=1;
    for ( i =2; i <x; i++)
    {
        if (x%i==0)
        {
            isprime=0;
            
            continue;
        }
        printf("i=%d\n",i);
    }
    if (isprime==1)
    {
        printf("%d是素数",x);
    }else
    {
        printf("%d不是素数",x);
    }
    
    return 0;
}