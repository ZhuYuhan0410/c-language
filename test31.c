#include<stdio.h>
int main()
{
    int startNum;
    int currtNum;
     printf("请输入你想要的数字：");
    while(scanf("%d",&startNum)!=-1)
    {
        if(startNum <=0||startNum >=100)
        {
            printf("该输入数字不符合要求，请重新输入");
        }
        else
        {
            printf("%d到100间带9的数字有：",startNum);
            for(currtNum = startNum;currtNum <= 100;currtNum++)
            {
                
                if(currtNum % 10 ==9||currtNum / 10 == 9)
                {
                    printf("%d ",currtNum);
                }
                
            }
        }
        printf("\n请输入你想要的数字：");
    }
    return 0;
}