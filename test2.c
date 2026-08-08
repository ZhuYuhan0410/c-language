#include<stdio.h>
int main()
{
    char ch=65,ch2=90,ch3=97,ch4=122,ch5=10,ch6=48,ch7=57;
    printf("%c\n%c\n%c\n%c\n%c\n%c\n%c\n",ch,ch2,ch3,ch4,ch5,ch6,ch7);
    /*因为\n就是换行，
    在执行%c这就是字符10表达的\n也就是换行，
    然后在紧跟着%c的\n也代表换行
    所以就换了两次行
    若把\n删掉就只换了一次行*/
    return 0;   
}