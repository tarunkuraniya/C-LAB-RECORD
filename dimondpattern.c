#include<stdio.h>
int main()
{
	int i, space,rows, c=0;
	for(i=1;i<=5;i++,c=0)
	{
		for(space=1;space<=5-i;++space)
		{
			printf("  ");
		}
		while(c!=2*i-1)
		{
			printf("* ");
			++c;
		}
		printf("\n");
	}
return 0;
}
