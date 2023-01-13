#include<stdio.h>
 void add()
  {int x,y,sum;
  	printf("enter first no.=");
  	scanf("%d",&x);
  	printf("enter the second no.=");
  	scanf("%d",&y);
  	sum=x+y;
  	printf("sum=%d\n", sum);
  }
   void sub()
  {int x,y,sub;
  	printf("enter first no.=");
  	scanf("%d",&x);
  	printf("enter the second no.=");
  	scanf("%d",&y);
  	sub=x-y;
  	printf("sub=%d\n", sub);
  }
  void mult()
  {int x,y,mult;
  	printf("enter first no.=");
  	scanf("%d",&x);
  	printf("enter the second no.=");
  	scanf("%d",&y);
  	mult=x*y;
  	printf("mult=%d\n", mult);
  }
  void div()
  {int x,y,div;
  	printf("enter first no.=");
  	scanf("%d",&x);
  	printf("enter the second no.=");
  	scanf("%d",&y);
  	div=x/y;
  	printf("div=%d\n", div);
  }
void main()
{
	add();
	sub();
	mult();
	div();
}
