#include<stdio.h>
int main()
{
    int b;
    double result;
    //浮点型用float
    
    for(b = 1;b <= 100;b++)
    {
        if(b % 2 == 0)
        {
            result -= 1.0/b; 
        }
        else
        {
            result += 1.0/b;
            //想要得到浮点数的结果，分子分母两端至少有一个是浮点数！
        }
    }
    printf("结果为：%f\n",result);
    return 0;
}