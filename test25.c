#include<stdio.h>
int main()
{
    int a;
    
    printf("请输入想要阶乘的数字：\n");
    while(scanf("%d",&a)!=-1&& a !=0)
    {
        int b = 1;
        int c = a;
        while(c > 0)
        {
            b *= c;
            c --;
        }
        printf("该数字阶乘结果为：%d\n",b);
        
        

    }
    return 0;
}