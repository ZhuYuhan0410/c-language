#include<stdio.h>
int main()
{
    int a = 1;
    while(a <= 100&&a++)
    {
        if( a % 3 ==0)
        {
            printf("%d\n",a);
            break;
        }
    }
    return 0;
}