#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("请输入a和b\n");
    while( scanf("%d %f",&a,&b)!=-1)
    {
    float c=a/b;
    //想要输出c值有小数，为上述写法
    //或者：float c=（float）a/b;也可

    printf("c=%f\n",c);
    }



    return 0;
}