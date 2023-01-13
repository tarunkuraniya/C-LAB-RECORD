#include<stdio.h>
int main()
{
	int min,max;
	printf("print two positive no.\n");
	scanf("%d%d",&min,&max);
	printf("even no. between %d and %d are: \n");
	while(min<=max)
	{
		if(min%2==0)	
		printf("%d",min);
		min++;
		
	}
	return 0;
}
