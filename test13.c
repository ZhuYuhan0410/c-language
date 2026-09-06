#include<stdio.h>
int main()
{
    int math=0;
    int physics=0;
    float english=0.0f;
    printf("Please enter your scores for math,physics and english:\n");
    int ret = scanf("%d %d %f",&math,&physics,&english);
    printf("math:%d,physics:%d,english:%.2f\n",math,physics,english);
    printf("Congratulations!You have input the scores of three courses successfully!\n");
    printf("ret=%d\n",ret);
    //scanf函数的返回值是成功读取的输入项的数量，
    //如果输入不符合格式要求，scanf函数会返回一个小于预期值的整数，表示实际成功读取的输入项数量。
    //测试返回值时，提前返回只需按control+d即可。
    


    return 0;
}