#include<stdio.h>
int main()
{
	int a[100],n,freq[40]={0},i;
	printf("enter the no. of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the marks of students:  ");
		scanf("%d",&a[i]);
		if(a[i]>60)
		freq[a[i]-61]++;
	}
	for(i=0;i<40;i++)
	{
		if(freq[i]>0)
		printf("%d students got %d marks\n", freq[i], i+60);
	}
}
