#include<stdio.h>
int main()
{
    int year;
    printf("请输入查询年份：\n");
    while(scanf("%d",&year)!= -1)
    {
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
        printf("%d 是闰年\n",year);

        }
        else
        {
        printf("%d 不是闰年\n",year);
        }
    }

    
    return 0;
}
/*
也可以这样写：
if(year % 4 == 0 && year % 100 != 0 ）
{
    printf("%d 是闰年\n",year);
}
else if(year % 400 == 0)
{
    printf("%d 是闰年\n",year);
}
else
{
    printf("%d 不是闰年\n",year);
}

*/