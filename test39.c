#include <stdio.h>

int main() 
{
    int n;
    int m;
    
    // 【加在最外层】多组输入循环
    while (scanf("%d %d", &n, &m) == 2) 
    {
        // 你原来的输入合法性检查
        if(n < 1)
        {
            printf("输入行数不满足要求，请从新输入：");
            continue; // 跳过本次循环剩下的部分，重新等待输入
        }
        else if(m > 10)
        {
            printf("输入列数不满足要求，请从新输入：");
            continue; // 同样跳过
        }

        // 固定数组大小（兼容牛客网）
        int nums[10][10];
        
        // 初始化 a = 1，用于自动生成 1,2,3...
        int a = 1; 

        // 自动填充矩阵（你原来的逻辑）
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                nums[i][j] = a;
                a++;
            }
        }

        // 打印转置前的矩阵
        printf("转置前的矩阵为：\n");
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                printf("%d ", nums[i][j]);
            }
            printf("\n");
        }

        // 转置矩阵并打印
        printf("转置后的矩阵为：\n");
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", nums[j][i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}