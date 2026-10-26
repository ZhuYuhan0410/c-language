/*递归分别实现求第n个斐波那契数

例如：

输入：5  输出：5

输入：10， 输出：55

输入：2， 输出：1*/
#include <stdio.h>
int main()
{
    // 创建一个变量
    int fib;
    //输入想要计算的项
    printf("请输入想要查询的项：\n");
    scanf("%d",&fib);
    //计算
    int a = 1;
    int b = 1;
    int c = 1;
    for(int i = 3;i <= fib;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    //打印输出值
    printf("第%d项的值为%d\n",fib,c);
    return 0;
}