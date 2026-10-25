//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回-1.
#include<stdio.h>
int main()
{
    //定义一个数组
    int nums[10];
    //数组长度
    int length = sizeof(nums) / sizeof(nums[0]);
    //输入数组元素
    printf("请输入十个整数（升序）：\n");
    for(int i = 0;i < length;i++)
    {
        scanf("%d",&nums[i]);
    }
    //输入要查找的数值
    int goal;
    printf("请输入要查找的数值：\n");
    scanf("%d",&goal);
    //二分查找
    int left = 0;
    int right = length - 1;
    while(left <= right)
    {
        int mid = left + (right - left ) / 2;
        //为什么要用 left + (right - left ) / 2 而不是 (left + right) / 2 呢？
        //因为 (left + right) / 2 可能会导致整型溢出，而 left + (right - left ) / 2 不会。
        if(nums[mid] == goal)
        {
            printf("已查找到目标数字：%d,在数组nums的位置为：%d\n",goal,mid);
            //注意此处，如果找到了目标数字，就应该退出循环，否则会继续查找，导致输出多次。
            break;
        }
        else if(nums[mid] < goal)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
       
    }
    if(left > right)
    {
        printf("未查找到目标数字：%d\n",goal);
    }
    return 0;
}