//给定不超过6的正整数A，考虑从A开始的连续4个数字，请输出所有由他们组成的无重复数字的3位数。
#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    int i,j,k;
    int cnt=0;
    
    for(i=A;i<=A+3;i++)
    {
        for(j=A;j<=A+3;j++)
        {
            for (k=A;k<=A+3;k++)
            {
               if (i!=k&&i!=j&&j!=k)
               {
                cnt++;
                printf("%d%d%d",i,j,k);
                if (cnt==6)
                {
                    printf("\n");
                    cnt=0;
                }else{
                    printf(" ");
                }
                
               }
                
            }
            
        }
    }
    

    return 0;
}