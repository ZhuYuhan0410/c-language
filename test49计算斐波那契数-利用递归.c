/*递归实现求第n个斐波那契数

例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1*/
#include <stdio.h>
//递归函数
int fib(int n)
{
    if(n == 1 || n ==2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    int sum = fib(n);
    printf("该第%d项值为%d\n",n,sum);
    return 0;
}