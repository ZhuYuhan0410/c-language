#include<stdio.h>
int main() 
{
    // long a =11111111111111111;
    // int b=(int)a;//强制类型转换，可能会导致数据丢失，所以这里要加上（int）
    // printf("%d\n",b);
    // return 0;
    float a=3.14;
    int b=a;//隐式类型转换，可能会导致数据丢失，所以这里要加上（int）
    //float类型转换为int类型时，浮点数的小数部分会被舍弃，只保留整数部分。
    printf("%d\n",b);
    return 0;
}