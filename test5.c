// #include<stdio.h>
// int main()
// {
//     float money=9.9;
//     float money2=10.9;
//           money2=10.1f;
//     printf("%f,%f\n",money,money2);
//     return 0;

// }
#include<stdio.h>
int main()
{
    double money=9.9;
    double money2=19.9;
    printf("%lf\n%lf\n",money,money2);
    //打印浮点数double float时是%lf而不是%df！
    //但由于系统原因只精确到后六位（不是自己的代码有问题），所以打印时会出现误差。
    return 0;

}