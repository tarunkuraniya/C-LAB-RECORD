#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("enter array size:");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&x[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(x[i]>x[i+1])
			{
				c=x[i];
				x[i]=x[i+1];
				x[i+1]=c;
			}
		}
	}
	printf("sorted array=");
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
}
