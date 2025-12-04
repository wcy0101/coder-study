#include<stdio.h>

int main()
{
 int amount;
 int price=0;

 printf("请输入金额：");
 scanf("%d",&price);

 printf("请输入面额:");
 scanf("%d",&amount);


 int change=amount-price;

 printf("找你%d\n",change);


   return 0;
}