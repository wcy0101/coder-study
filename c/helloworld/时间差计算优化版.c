#include<stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int hour=hour2-hour1;
    int minute=minute2-minute1;
    if (minute<0)
    {
       minute=minute+60;
       hour=hour-1;
        /* code */
    }
    
    
    printf("时间差为%d时%d分",hour,minute);


    return 0;
}