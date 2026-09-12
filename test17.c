#include<stdio.h>
int main()
{
    int a;
    int b;
    int ret;
    printf("请输入a和b的值\n");
    while((ret=scanf("%d %d",&a,&b))!=-1)
    {
        int c = a%b;
        //输出余数时若a为正数，b为负数时，余数为负数；
        //若a为正数，b为负数时，余数为正数；
        printf("a除以b的余数为:%d\n",c);
        printf("输出返回值ret=%d\n",ret);
    }



    return 0;
}