// #include<stdio.h>
// int main()
// {
// char ch=65,ch2=97,ch3=90,ch4=122,ch5=10,ch6=48,ch7=57;
// printf("%c\n%c\n%c\n%c\n%c%c\n%c\n",ch,ch2,ch3,ch4,ch5,ch6,ch7);
// return 0;




// }
#include<stdio.h>
int main()
{

char ch=48,ch2=57,ch3=10,ch4=65,ch5=90,ch6=97,ch7=122;
printf("%c,%c,%c%c,%c,%c,%c\n",ch,ch2,ch3,ch4,ch5,ch6,ch7);
//括号要包含文件“ch”
return 0;
/*还要注意一个点！
char ch=...
这只是限定了它的存储空间是一个字节。
为什么char类型是字符型却可以表示数据
最重要的原因是，后续printf函数的%c格式化输出符号，
它会将char类型的变量当作字符来处理。
如果后续printf函数的%d格式化输出符号，
它会将char类型的变量当作整数来处理。
*/


}
