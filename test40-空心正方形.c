#include <stdio.h>

int main()
{ 
    int num;
    printf("请输入想打印的空心矩形长宽：\n");
    while(scanf("%d",&num)!=-1)
    {
        int nums[num][num];
        //先打印空格
        for(int i = 0;i < num;i++)
        {
            for(int j = 0;j < num;j++)
            {
                if(i == 0||i == num - 1||j == 0||j == num - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("请输入想打印的空心矩形长宽：\n");
    } 
    
    return 0;  
}