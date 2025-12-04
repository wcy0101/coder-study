#include<stdio.h>
int main()
{
    int type;
    scanf("%d",&type);
    switch (type)
    {
    case 1:
    case 2:
    printf("good");
    break;
    case 3:
    printf("bad");
    case 4:
    printf("well");
    break;
    default:
    printf("nothing");
    break;
    }

    return 0;
}