#include<stdio.h>
int main() 
{
    long a =11111111111111111;
    int b=(int)a;//强制类型转换，可能会导致数据丢失，所以这里要加上（int）
    printf("%d\n",b);



    return 0;
}