//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。
#include <stdio.h>
int main()
{
    //定义一个数组来存储10个整数
    int nums[10];
    //求数组长度
    int len = sizeof(nums) / sizeof(nums[0]);
    //让用户输入十个整数。
    printf("请依次输入10个整数：\n");
    for(int i = 0;i < len;i++)
    {
        scanf("%d",&nums[i]);
    }
    //先求和
    int sum = 0;
    for(int i = 0;i < len;i++)
    {
        sum += nums[i];
    }
    //再计算平均值
    int average = sum / len;
    //输出平均值
    printf("您输入的10个整数的平均值为：%d\n",average);
    return 0;
}