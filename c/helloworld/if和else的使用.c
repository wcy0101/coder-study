#include<stdio.h>
int main()
{
    int price;
    int bill;
    printf("请输入金额:");
    scanf("%d",&price);
    printf("请输入票面:");
    scanf("%d",&bill);
    if (price<=bill)
    {
        printf("找你%d元",bill-price);
    }
    else
    {
        printf("你还差%d元",price-bill);
    }
    
    
    return 0;
}