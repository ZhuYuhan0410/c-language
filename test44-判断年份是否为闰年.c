//test44-判断年份是否为闰年.c
#include <stdio.h>
int main()
{
    //先定义一个函数，判断年份是否为闰年
    int year;
    //输入年份
    printf("请输入想要查询的年份：\n");
    while(scanf("%d",&year)!= -1)
    {
        printf("您输入的年份为：%d\n",year);
        if(year % 4 == 0 && year % 100 == 0|| year % 400 == 0)
        {
            printf("%d是闰年\n",year);
        }
        else
        {
            printf("%d不是闰年\n",year);
        }
        printf("请输入想要查询的年份：\n");
    }
    return 0;
}