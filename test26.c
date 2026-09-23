#include<stdio.h>
int main()
{
    int a;
    int b;
    for(int a = 1;a <= 100;a ++)
    //还可以写成：
    //for(int a = 2;a <= 100;a += 2)
    {
        if(a% 2 == 0)
        //tip:==才是判断等于
        {
            b += a;
        }

    }
    printf("一百以内的偶数之和为：%d\n",b);
    return 0;
}