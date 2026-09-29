//数组倒置练习
#include<stdio.h>
int main()
{
    //first：先定义一个数组
    int nums[] = {1,2,3,4,5};
    //second:算一下数组长度
    int len = sizeof(nums) / sizeof(nums[0]);
    //打印最初的数组
    printf("初始的数组nums为：");
    for(int i = 0;i < len;i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
    //接下来完成倒置前的准备工作。
    int left = 0;
    int right = len - 1;
    //开始倒置
    while(left < right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left++;
        right--;
    }
    //最后打印倒置后的数组nums
     printf("数组nums倒置后：");
    for(int i = 0;i < len; i++)
    {
        printf("%d ",nums[i]);
    }
     printf("\n");
    return 0;
}