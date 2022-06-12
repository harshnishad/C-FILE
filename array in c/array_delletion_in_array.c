#include<stdio.h>
int main ()
{
    int a[100],i,n,pos,num;
    printf("Enter the elemrnt of an array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the delete postion elemnet ");
    scanf("%d",&pos);
    if(pos<=0 || pos>n )
    printf("wrong entery");
    else
    {
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
       for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    }
    
}
    