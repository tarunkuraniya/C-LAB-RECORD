//inserting an element in a given array at a given index:
#include<stdio.h>
int main()
{
	int n,p,e;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d %d",&p,&e);
	for(int i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=e;
	for(int i=0;i<n+1;i++)
	printf("%d\t",a[i]);
	return 0;
}

