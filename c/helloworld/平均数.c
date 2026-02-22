/*输入-1时表示输入结束*/
#include<stdio.h>
int main()
{
    int number;
    int sum=0;
    int count=0;
 
    scanf("%d",&number);
    do
    {
      sum+=number;
      count++;
      scanf("%d",&number);

    } while (number!=-1);
    printf("%f\n",1.0*sum/count);



    return 0;
}