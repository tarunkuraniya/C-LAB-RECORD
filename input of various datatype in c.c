#include<stdio.h>
int main()
{
	int num1,num2;
	float fraction;
	char character;
	
	printf("Enter two number\n");
	
	scanf("%d%i",&num1,&num2);
	printf("\n\nThe two numbers you have entered are %d and %i\n\n",num1,num2);
	
	printf("\n\nEnter a decimal number\n");
	scanf("%f",&fraction);
	printf("\n\nThe float or fraction that you have entered is%f",fraction);
	
	printf("\n\nEnter a character\n");
	scanf("%c",&character);
	printf("\n\nThe charecter you have enterd is %c",character);
	return 0;
}
