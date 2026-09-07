#include<stdio.h>
int main()
{
    int english=0;
    int math=0;
    float chinese=0.0;
    printf("Please enter your scores for english,math and chinese:\n");
    
    int ret;
    //int ret;定义一个整型变量，用来存储返回值
    while((ret = scanf("%d %d %f",&english,&math,&chinese) )!=-1)    
    //tip：注意多层括号的使用，每对括号都要成对出现且符合逻辑
    //ret=scanf("%d %d %f",&english,&math,&chinese)表示
    //将输入的三个值分别存储到english、math和chinese变量中，
    //并将成功读取的输入项数量赋值给ret。
    //！=-1表示当scanf函数成功读取输入项时，循环继续执行。
    //while循环的条件是scanf函数的返回值不等于-1，表示输入项读取成功。
    
    {
        printf("scanf成功读取输入项数量=%d\n",ret);
        printf("english=%d math=%d chinese=%f\n",english,math,chinese);
        printf("Congratulations!You have input the scores of three courses successfully!\n");
    }
    





    return 0;
}