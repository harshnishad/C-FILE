#include<stdio.h>
int main()
{
    int a[5],sum=0;
    float avg;
    for(int i=0;i<=4;i++)
    {
        printf("enter marks of subject %d ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/5;
    printf("sum=%d\n avg=%f",sum,avg);
    return 0;
}