#include<stdio.h>
int main()
{
    int a =0;
    int b =0;
    //scanf 返回值是成功读入的个数,读满2个数才进入循环
    while(scanf("%d %d",&a,&b)==2)
    {
        printf("交换前的值为：a=%d,b=%d\n",a,b);
        //异或的法则：a^a=0,a^0=a
        a = a ^ b;
        b = a ^ b;//b = (a^b)^b->b^b=0,所以a^0=a,所以b=a
        a = a ^ b;//a = (a^b)^a->a^a=0,所以b^0=b,所以a=b
        printf("交换后的值为：a=%d,b=%d\n",a,b);
    }

    return 0;
}