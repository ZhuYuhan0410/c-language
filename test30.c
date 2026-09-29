#include<stdio.h>
int main()
{
    int startNum;
    int currentNum;
    printf("请输入想要的数字（小于100）：");
    while(scanf("%d",&startNum)!=-1)
    {
        if(startNum >= 100 )
        {
            printf("该数字≧100，请重新输入：");
        } 
        else if(startNum <= 0)
        {
            printf("该数字≦0，请重新输入：");
        }
        else
        {
            printf("%d与100中能被3整除的数有：",startNum); 
            for(currentNum = startNum;currentNum <= 100;currentNum++)
            {
                if(currentNum % 3 != 0|| currentNum % 5 != 0)
                //if(currentNum % 15 != 0)
                {
                    continue;
                    //执行完 continue，它会直接跳到 for 循环的currentNum++
                }
                printf("%-2d ",currentNum);  
            }
            printf("\n");
        }
         printf("请输入想要的数字（小于100）：");
    }
    return 0;
}