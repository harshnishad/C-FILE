#include<stdio.h>
int fact(int);
int main()
{
    int no,factorial;
    printf("enter the number: ");
    scanf("%d",&no);
    factorial=fact(no);
    printf("factorial of the num (%d) = %d \n",no,factorial);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}