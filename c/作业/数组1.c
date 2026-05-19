#include <stdio.h>

int main() {
    
    double score [5];
    double sum = 0, average;
    int i;

    printf("请输入5位同学的成绩:\n");
    for (i = 0; i < 5; i++) {
        printf("第%d位同学的成绩:", i + 1);
        scanf("%f", &score[i]);
        sum += score[i]; 
    }

    average = sum / 5;

    printf(" 成绩列表 :");
    for (i = 0; i < 5; i++) {
        printf("第%d位同学的成绩:%.1f\n", i + 1, score[i]);
    }
    printf("平均分：%.2f\n", average);

    return 0;
}