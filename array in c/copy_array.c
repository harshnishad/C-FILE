#include<stdio.h>
int main()
{
    int a[1000],b[1000],i,m;
    printf("enter sige of array");
    scanf("%d",&m);
    printf("enter %d element in array  :",m);
   
    for( i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
   for( i=0;i<m;i++)
   {
       b[i]=a[i];
   }
    for( i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }

  
    return 0;
}