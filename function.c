 #include<stdio.h>
 //declaration
 void printhello();
 void goodbye();
 
 //function call
 int main()
 {
 	printhello();
 	printgoodbye();
 	printhello();
 	printgoodbye();
 	return 0;
 }
 
 //function defination
 void printhello()
 {
 	printf("Hello\n");
 }
 void printgoodbye()
 {
 	printf("Good bye\n");
 }
