#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;
    printf("请输入英文句子：");
    fgets(str, 100, stdin);

    if( (str[0]>='a'&&str[0]<='z') || (str[0]>='A'&&str[0]<='Z') )
        count++;

    for(i=1; str[i]!='\0'; i++)
    {
        if( (str[i]>='a'&&str[i]<='z') && str[i-1]==' ' )
        {
            count++;
        }
    }
    printf("单词数量：%d\n", count);
    return 0;
}