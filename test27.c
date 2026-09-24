#include<stdio.h>
int main()
{
    int a;
    int b;
    for(a = 1;a <= 9;a++)
    {
        for(b = 1 ;b <= a;b++)
        {
            printf("%d * %d = %-3d ",b ,a, a*b);
            //-3d是为了让其向左对齐
        }
        printf("\n");
        //让九九乘法表呈现倒三角形式
    }
    return 0;
}
