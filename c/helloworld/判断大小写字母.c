#include<stdio.h>
int main()
{
    char C;
    printf("请输入一个字符:");
    scanf("%c",&C);
    if (C>='A'&&C<='Z')
    {
        printf("%c是大写",C);
    }else{
        printf("%c是小写",C);
    }
    

    return 0;
}