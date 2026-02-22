#include <stdio.h>
int main()
{
    int a;
    int n=0;

    scanf("%d",&a);

    n=n+1;
    a=a/10;

    while (a>=1)
    {
        a=a/10;
        n=n+1;
    }
    printf("%d位",n);

    return 0;
}

