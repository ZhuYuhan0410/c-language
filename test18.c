#include<stdio.h>
int main()
{
    int a;
    int b;
    int ret;
    printf("Enter two numbers: \n");
    while((ret = scanf("%d %d",&a,&b)) != -1)
    {
        int c = a > b? a : b;
        printf("较大数为：%d\n",c);
        printf("输出返回值ret=%d\n",ret);



    }


    return 0;
}