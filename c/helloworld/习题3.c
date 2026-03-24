//9*9乘法表,给定任意1位正整数N，输出从1*1到N*N的部分口诀表。
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for (i=1; i<=n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d",j,i,j*i);
            if (i*j<10)
            {
                printf("   ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}