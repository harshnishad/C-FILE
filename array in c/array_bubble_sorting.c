#include<stdio.h>
int main()
{
    int a[100],temp,j,i,lim;
    printf("enter lim");
    scanf("%d",&lim);
    for(i=0;i<lim;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<lim-1;i++)
    {
        for(j=0;j<lim-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<lim;i++)
printf("%d",a[i]);
}