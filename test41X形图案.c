#include <stdio.h>

int main() 
{
    int n;
    while(scanf("%d",&n)!= -1)
    {
        int nums[n][n];
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                //打印左上角对角线
                if(i == j)
                {
                    printf("*");
                }
                //打印右上角对角线
                else if(j == n - 1 -i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }
    }
    return 0;
}