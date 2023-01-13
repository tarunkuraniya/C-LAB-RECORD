//to count total number of positive,negative and zero elements
#include <stdio.h>

int main()
{
   int n,x=0,z=0,y=0;
   printf("enter the size of arrey:");
   scanf("%d",&n);
   int a[n],i,j;
   printf("enter the elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(j=0;j<n;j++){
    if(a[j]>0){x++;}
    else if(a[j]<0){z++;}
    else(a[j]=0){y++;}
   }
   printf("No of positive no:%d",x);
   printf("No of zero no:%d",y);
   printf("No of negative no:%d",z);
    return 0;
}


