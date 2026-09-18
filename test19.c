#include<stdio.h>
int main ()
{
    int a = 0;
    int ret;
    printf("请输入一个整数：\n");
    
    
    while((ret = scanf("%d",&a)) != -1)
    {
        printf("返回值为：%d\n",ret);
        if(ret == 0)
        {
            printf("输入错误，请重新输入一个整数：\n");
            
        }
        else
        {
            printf("返回值正常，代码运行正确！\n");
        }
        if(a % 2 == 1)
        {
            printf("%d是奇数\n",a);
        }
        else
        {
            printf("%d是偶数\n",a);
        }
        
    
    }
       
    return 0;
}