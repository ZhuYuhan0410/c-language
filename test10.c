#include<stdio.h>
int main()
{
    printf("%5d\n",10);//%5d表示输出的整数占5个字符宽度，右对齐，左边用空格填充
    printf("%-5d",10 );//%-5d表示输出的整数占5个字符宽度，左对齐，右边用空格填充
    printf("abc\n");
    return 0;
}