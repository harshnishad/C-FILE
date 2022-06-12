#include<stdio.h>
void sum()
{
    int a,b,c=0;
    printf("enter the first no: ");
    scanf("%d",&a);
    printf("enter the second no: ");
    scanf("%d",&b);
    c=a+b;
    printf("sum=%d \n",c);
}
void sub()
{
    int a,b,c=0;
    printf("enter the first no: ");
    scanf("%d",&a);
    printf("enter the second no: ");
    scanf("%d",&b);
    c=a-b;
    printf("sub=%d \n",c);
}
void main()
{
    sum();
    sub();
    sum();
}