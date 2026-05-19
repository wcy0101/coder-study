#include <stdio.h>

int main()
{
    
    int arr[3][4] = {
        {12, 45, 7, 89},
        {3, 99, 56, 21},
        {77, 2, 63, 35}
    };

    int row = 3;   
    int col = 4;   
    int max;       

    max = arr[0][0];

    for(int i = 0; i < row; i++)
    {
        
        for(int j = 0; j < col; j++)
        {
            
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    
    printf("二维数组中的最大值为：%d\n", max);

    return 0;
}