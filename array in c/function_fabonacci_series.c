#include<stdio.h>
int fab(int);
int main()
{
    int no,fabonnaci;
    printf("enter the number: ");
    scanf("%d",&no);
    fabonnaci=fab(no);
    printf("fabonacci of the num (%d) = %d \n",no,fabonnaci);
}
int fab(int no)
{
    int a=0,b=1,c,sum=1,lim,i;
    for(i=1;i<=no;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}