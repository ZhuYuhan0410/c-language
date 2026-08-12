// #include<stdio.h>
// int main()
// {
//     int save=10;
//     int a=20;
//     printf("%d\n%d\n",save,a);
//     return 0;
// }
#include<stdio.h>
int main()
{
    long save=10;
    long a=20;
    printf("%ld\n%ld\n",save,a);
    //整形打印时是%d，长整形打印时是%ld这样才会适配。（其他同理）
    return 0;
}