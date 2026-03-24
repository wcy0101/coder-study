#include<stdio.h>
int main()
{
    int a=6;
    printf("sizeof(int)=%ld\n",sizeof(int));
    printf("sizeof(a)=%ld\n",sizeof(a));
    printf("sizeof(a)=%ld\n",sizeof(a+1.0));
    printf("a=%d",a);
    return 0;
}