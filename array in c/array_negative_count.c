#include<stdio.h>
int main()
{
    int a[1000],sum=0,i,m,count=0;
    printf("enter sige of array");
    scanf("%d",&m);
    printf("enter %d element in array  :",m);
   
    for( i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n all negative number of array are : ");
   for( i=0;i<m;i++)
   {
       if(a[i]<0)
       printf("%d",a[i]);
       ++count;   
      
   }
   printf("\n%d",count);

  
    return 0;
}