#include<stdio.h>
int main()
{
    int nums[] = {1,2,3,4,5,4,3,2,1};
    printf("数组中的数字为：1，2，3，4，5，4，3，2，1\n");
    //            0 1 2 3 4 5 6 7 8
    int ret = 0;
    for(int i = 0; i < 9; i++ )//for循环自动从左至右打开数组nums
    {
        ret = ret ^ nums[i];
        //ret的初始值为0,
        //所以ret^nums[0] = 0^1 = 1,
        //然后ret^nums[1] = 1^2 = 3,
        //然后ret^nums[2] = 3^3 = 0,
        //然后ret^nums[3] = 0^4 = 4,
        ///然后ret^nums[4] = 4^5 = 1,
        //然后ret^nums[5] = 1^4 = 5,
        //然后ret^nums[6] = 5^3 = 6,
        //然后ret^nums[7] = 6^2 = 4,
        //最后ret^nums[8] = 4^1 = 5
        //相当于1^2^3^4^5^4^3^2^1 = 5
    }
    printf("数组中只出现一次的数字为：%d\n",ret);
    return 0;
}