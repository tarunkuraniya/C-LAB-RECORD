//deleting an element from given index from array.
#include<stdio.h>
int main()
{
	int n,p;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&p);
	for(int i=p;i<n-1;i++)
	a[i]=a[i+1];
	a[n-1]=0;
	for(int i=0;i<n-1;i++)
	printf("%d",a[i]);
	return 0;
}
// write a c program to delete an element from array whose value is given by user.


