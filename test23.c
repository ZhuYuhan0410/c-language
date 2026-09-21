#include<stdio.h>
int main()
{
    int day;
    printf("请输入查询日期：\n");
    while(scanf("%d",&day)!= -1)
    {
        switch(day)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("工作日\n");
                break;
            case 6:
            case 7:
                printf("休息日\n");
                break;
            default:
                printf("请重新输入日期\n");
                break;
        }
    /*
    也可以这样写（但比较繁琐）：
    switch(day)
    {
      case 1:
        printf("工作日\n");
        break;
      case 2:
        printf("工作日\n");
        break;
        像这样一个一个情况写
    }
    */
    }
    return 0;
} 