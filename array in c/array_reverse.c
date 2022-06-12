
#include<stdio.h>
int main(){
   int arr[100],lim;
   printf("enter the limit ");
   scanf("%d",&lim);
   for(int i=0;i<lim;i++){
           scanf("%d",&arr[i]);
       
   }
   
        for(int i=lim-1;i>=0;i--)
        {
           printf("%d",arr[i]);

   }
    return 0;
}