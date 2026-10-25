//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

//输入：1729，输出：19
#include<stdio.h>
//递归函数dig
int dig(int n)
{
    if(n == 0)
    {
        return 0; 
    }
    else
    {
        return n % 10 + dig(n /10);
    }
}
int main()
{
    int n;
    printf("请输入一个非负整数：\n");
    scanf("%d",&n);
    int sum = dig(n);
    printf("组成它的数字之和是：%d\n",sum);
    return 0;
}