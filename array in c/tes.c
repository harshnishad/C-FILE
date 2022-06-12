#include<stdio.h>
int main()
{
    int a[100];
    int i,lim;
    int a_max,a_min;
    printf("enter the limit");
    scanf("%d",&lim);
    a_max=a_min=a[0];
    for(i=0;i<lim;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<lim;i++)
    {
         if(a_max<a_min)
         {
         printf("max=%d",a_max);
         }
         if(a_min<a_max)
         {
         printf("min=%d",a_min);
         }
    }
}