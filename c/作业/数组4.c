#include <stdio.h>

int main()
{
    
    int score[5];
    int i, j, temp;

    printf("请输入5名学生的成绩：\n");
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(score[j] < score[j+1])
            {
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }

    printf("降序排序后的成绩：\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }

    return 0;
}