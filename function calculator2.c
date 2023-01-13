//wcp to print calculator (+,-,*,/)

#include<stdio.h>
 void add()
  {int x,y,sum;
  	printf("enter first no.=");
  	scanf("%d\n",&x);
  	printf("enter the second no.=");
  	scanf("%d\n",&y);
  	sum=x+y;
  	printf("sum=%d\n", sum);
  }
  void sub()
  {int x,y,sub;
  	printf("enter first no.=");
  	scanf("%d\n",&x);
  	printf("enter the second no.=");
  	scanf("%d\n",&y);
  	sub=x-y;
  	printf("sub=%d\n", sub);
  }
  void mult()
  {int x,y,mult;
  	printf("enter first no.=");
  	scanf("%d\n",&x);
  	printf("enter the second no.=");
  	scanf("%d\n",&y);
  	mult=x*y;
  	printf("mult=%d\n", mult);
  }
  void div()
  {int x,y,div;
  	printf("enter first no.=");
  	scanf("%d\n",&x);
  	printf("enter the second no.=");
  	scanf("%d\n",&y);
  	div=x/y;
  	printf("div=%d\n", div);
  }
  void main()
  {
  	add();
  	mult();
  }
