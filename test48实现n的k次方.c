//编写一个函数实现n的k次方，使用递归实现。
#include<stdio.h>
int Exponentiation(int n,int k)
{
    if(k == 1)
    {
        return n;
    }
    else
    {
        return n * Exponentiation(n , k-1);
    }
}
int main()
{
    int n,k;
    printf("请输入底数n：\n");
    scanf("%d",&n);
    printf("请输入指数k：\n");
    scanf("%d",&k);
    int result = Exponentiation(n,k);
    printf("%d的%d次方是：%d\n",n,k,result);
    return 0;
}