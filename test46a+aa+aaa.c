//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
#include<stdio.h>
int main()
{
    //定义变量
    int a;
    int term;
    int sum = 0;
    //输入数字a
    printf("请输入一个数字a：\n");
   scanf("%d",&a);
   //计算前5项之和
   for(int i = 0;i < 5;i++)
   {
    term = term * 10 + a;//计算吗每一项的值
    sum = term + sum;
   }
   //输出结果
    printf("前5项之和为：%d\n",sum);
    return 0;
}