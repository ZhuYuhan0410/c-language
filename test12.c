#include<stdio.h>
int main()
{
    int Eglishi=0;
    int Math=0;
    int Chinese=0;
    printf("请按照格式输入三门课程：\n");
    scanf("%d,%d,%d",&Eglishi,&Math,&Chinese);//在输入时，要用逗号隔开。
    //因为scanf函数书写格式是"%d,%d,%d"，所以在输入时也要用逗号隔开。
    printf("English:%d,Math:%d,Chinese:%d\n",Eglishi,Math,Chinese);
    printf("Congratulations!You have input the scores of three courses successfully!\n");
    return 0;
}