#include<stdio.h>
int main()
{
    int a;
    int b;
    int ret;
    printf("请输入一个想要的数：");
    
   

         while((ret = scanf("%d",&a))!=-1)
        {
            
       
         
             if(a<100)
             {
                for(b = a;b <= 100;b++)
                {
                   if(b % 3 == 0)
                  {
                    printf("%d为在%d与100间第一个能被3整除的数字\n",b,a);
                    break;
                  }
                }
            }
                else
                {
                    printf("该数字大于等于100\n请重新输入小于100的数\n");
                    break;
                }
         printf("ret的值为：%d\n",ret);
         printf("请输入一个想要的数：");
    
        
       
        }
    return 0;
}