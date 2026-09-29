//题目：输入十个整数，找出最大值
#include<stdio.h>
int main()
{
    //首先，先确定我们需要几个变量及其命名
    //1、输入数字num
    //2、读到哪个数字了count.记住初始读数为1
    //3、记录“到目前为止的最大值”。max
    int num;
    int count = 1;
    int max;
    //把读到的第一个数字，直接当作初始的“最大值”。
    //防止设置默认初始值如0（而输入整数全为负数则输出最大整数就为0了）
    printf("请输入一个整数：\n");
    if(scanf("%d",&max)!=1)
    //scanf 判断如果输入不到 10 个该怎么优雅地退出
    {
        printf("您没有输入任何有效数字，程序结束。\n");
        return 0;
    }
    while(count < 10)
    {
        printf("请输入一个整数：\n");
                // scanf("%d",&num);
        if(scanf("%d",&num)!=1)
        // if(scanf("%d",&num)!=1)
        //快速复制shift+option+⬇️
                {
             break;
             //scanf 判断如果输入不到 10 个该怎么优雅地退出
        }
        if(num > max)
        {
           max = num;
        }
        
        count++;
    }
    if(count < 10)
    {
        printf("\n检测到输入提前结束，共输入%d个有效数字",count);
        //scanf 判断如果输入不到 10 个该怎么优雅地退出
    }
    printf("十个整数中，最大的整数为：%d",max);
    return 0;
}