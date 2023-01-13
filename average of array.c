#include<stdio.h>
int main()
{
	int size,i;
	float avg,sum=0;
	printf("enter the size of an array: ");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		printf("enter the elements: ");
		scanf("%d",&a[i]);
		sum+=a[i];//sum=sum+a[i]
	}
	printf("the created array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	avg=sum/size;
	printf("\n");
	printf("the sum of all the elements: %g\n",sum);
	printf("the avg of all the elements: %g\n",avg);
	printf("\n"); 
}
