#include <stdio.h>
void print_arr(int *p,int len)
{
    for(int i = 0;i < len;i++)
    {
        printf("%d ",*(p + i));
    }
    printf("\n");
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr,len);
    return 0;
}