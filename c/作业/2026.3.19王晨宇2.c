#include<stdio.h>
int main()
{
   int i,j,k;
   scanf("%d %d %d",&i,&j,&k);
   int a;
   if (i<j)
   {
    a=i;
    i=j;
    j=a;
   }
   if (i<k)
   {
    a=i;
    i=k;
    k=a;
   }
   if (j<k)
   {
    a=j;
    j=k;
    k=a;
   }
   printf("%d %d %d",i,j,k);
   
   

    return 0;
}