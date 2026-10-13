#include <stdio.h>

int main() 
{
    printf("请输入二维数组的行数和列数（行数大于等于1，列数小于等于10）：\n");
    //定义两个变量。
    int n;
    int m;
    //输入想要的二维数组行与列的长度
    scanf("%d %d",&n,&m);
    if(n < 1)
    {
        printf("输入行数不满足要求，请从新输入：");
    }
    else if(m >10)
    {
        printf("输入列数不满足要求，请从新输入：");
    }
    
    //定义设置一个二维数组。
    int nums[n][m];
    //定义一个整数
    int a = 1;
    //开始输入整数
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            nums[i][j] = a;
            a++;
        }
    }
    //打印转置前的矩阵
    printf("转置前的矩阵为：\n");
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }
    //开始转置矩阵
    printf("转置后的矩阵为：\n");
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("%d ",nums[j][i]);
        }
        printf("\n");
    }
    return 0;
}