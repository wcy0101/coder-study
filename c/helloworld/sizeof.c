#include<stdio.h>
int main()
{
    int a=6;
    printf("sizeof(int)=%zu\n",sizeof(int));
    printf("sizeof(a)=%zu\n",sizeof(a));
    printf("sizeof(a)=%zu\n",sizeof(a+1.0));
    printf("a=%d",a);
    return 0;
}