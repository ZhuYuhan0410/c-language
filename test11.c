#include<stdio.h>
int main()
{
    float c=1.1;
    float a=3.1;//%f表示输出浮点数，6.2表示输出的浮点数占6个字符宽度，其中小数部分占2位，整数部分占4位，右对齐，左边用空格填充
    printf("%f%6.2f\n",c,a);
    return 0;
}