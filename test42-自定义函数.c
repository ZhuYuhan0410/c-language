//test42-自定义函数.c
#include <stdio.h>
void print_information(int num[], int len)
{
    
    
        for(int j = 0;j < len;j++)
        {
            printf("%d ",num[j]);
        }
    
}
int main()
{
    int nums[]= {1,2,3,4,1,2,3,4};
    int length = sizeof(nums) / sizeof(nums[0]);
    print_information(nums ,length);
    return 0;
}