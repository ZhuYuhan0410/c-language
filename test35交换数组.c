//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include <stdio.h>
int main()
{
    //定义两个数组
    // int A[] = {1,2,3,4,5};
    // int B[] = {6,7,8,9,10};
    int A[5];
    int B[5];
    //输入数组A的内容
    printf("请输入数组A的内容：\n");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&A[i]);
    }
    //输入数组B的内容
    printf("请输入数组B的内容：\n");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&B[i]);
    }
    //计算数组长度
    int length1 = sizeof(A) / sizeof(A[0]);
    int length2 = sizeof(B) / sizeof(B[0]); 
    //打印交换前的数组
    printf("交换前的数组A为：");
    for(int i = 0;i < length1;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("交换前的数组B为：");
    for(int i = 0;i < length2;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
    //交换两个数组内容
    int i = 0;
    while(i < length1 && i < length2)
    {
        int reserve = A[i];
        A[i] = B[i];
        B[i] = reserve;
        i++; 
    }
    //打印交换后的数组
    printf("交换后的数组A为：");
    for(int i = 0;i < length1;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("交换后的数组B为：");
    for(int i = 0;i < length2;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
    return 0;
}