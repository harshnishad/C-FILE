#include<stdio.h>
int main()
{
    int a[100][100];
    int lim,i,j;
    printf("enter array lim");
    scanf("%d",&lim);
    for(i=0;i<lim;i++){
    
        for(j=0;j<lim;j++) {
        
            scanf("%d ",&a[i][j]);}
    }
        
            printf("%d",a[i][j]);
        
        
    
    
}