#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER the first no.\n");
	scanf("%d",&a);
	printf("Enter the second no.\n ");
	scanf("%d",&b);
	switch(a>=b)
	{
		case 1: if(a==b) 
		        printf("equal");
		        else
		        printf("a is grater");
		        break;
		case 0: printf("b is grater than a");        
	}
	return 0;
}
