//编写⼀个程序，实现⼀个3×3矩阵的转置操作。矩阵转置是指将矩阵的⾏和列互换，即原矩阵的第
//i⾏第j列元素变为转置矩阵的第j⾏第i列元素。
#include <stdio.h>
int main()
{
    //定义一个3×3矩阵
    int matrix[3][3];
    //让用户输入矩阵的元素
    printf("请输入3×3矩阵的元素（共9个整数）：\n");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    //打印原矩阵
    printf("原矩阵为：\n");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //开始倒置矩阵
    int inversion[3][3];
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            inversion[j][i] = matrix[i][j];
        }
    }
    //打印倒置后的矩阵。
    printf("倒置后的矩阵为：\n");
    for(int i = 0; i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%d ",inversion[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
    