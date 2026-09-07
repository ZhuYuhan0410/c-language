#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    int ret;
    printf("请输入要求和的两个整数：\n");
    while((ret=scanf("%d %d",&a,&b))!=-1)
    {
        int c=a+b;
        printf("输出返回值%d\n",ret);
        printf("%d+%d=%d\n",a,b,c);


    }



    return 0;
}