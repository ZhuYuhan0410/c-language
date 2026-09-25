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
                if(currentNum % 3 != 0)
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
// int main()
// {
//     int a;
//     int b;变量命名可读性差
//     printf("请输入想要的数字（小于100）：");
//     while(scanf("%d",&a)!=-1)
//     {
//         if(a >= 100)
//         {
//             printf("该数字≧100，请重新输入：");
//         }
//         else
//         {
//             for(b = a;b <= 100;b++)
//             {
//                 if(b % 3 != 0)
//                 {
//                     continue;
//                 }
//                 else此处没有必要，结构啰嗦
//                 {
//                     printf("%d与100中能被3整除的数有：%d\n",a,b);
                       //你把 printf("%d与100中...", a, b); 放
                       //在了内层 for 循环里面，这就导致每找到一个符合条件的数字，
                       //就会打印一遍前面的前缀，显得非常冗余。
//                 }
//             }
//         }
//         printf("请输入想要的数字（小于100）：");
//     }
//     return 0;
// }
//
//
//
//题目：既能被3又能被5整除
//只需要把if(currentNum % 3 != 0)改成
    // if(currentNum % 3 != 0|| currentNum % 5 != 0)
 // //if(currentNum % 15 != 0)也行
                