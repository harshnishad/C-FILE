#include <stdio.h>

int main()
{
    int arr[100],lim,i,pos;
    printf("enter the limit ");
    scanf("%d",&lim);
    for(i=0;i<lim;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("enter the no to dellet ");
    scanf("%d",&pos);
    if(pos<=0 || pos>lim)
    printf("enter elemt is invalid ");
    for(i=pos-1;i<lim-1;i++)
    {
        arr[i]=arr[i+1];
    }
    lim--;
    for(i=0;i<lim;i++)
    {
       printf("%d",arr[i]);
    }
    

    
}
