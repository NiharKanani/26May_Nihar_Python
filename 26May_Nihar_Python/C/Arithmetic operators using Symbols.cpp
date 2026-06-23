//Switch Case of Arithmetic Operator using symbols:-
#include<stdio.h>
main()
{
	int a,b;
	char ch;
	printf("Enter 1st Number:- ");
	scanf("%d",&a);
	printf("Enter 2nd Number:- ");
	scanf("%d",&b);
	
	printf("\n+");
	printf("\n-");
	printf("\n*");
	printf("\n/");
	
	printf("\n\nEnter Choice:- ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
			printf("\nAddition = %d",a+b);
			break;
		case '-':
			printf("\nSubtraction = %d",a-b);
			break;
		case '*':
			printf("\nMultiply = %d",a*b);
			break;
		case '/':
			printf("\nDivision = %d",a/b);
			break;
		default:
			printf("\nError! Choose from the given Options...");
	}
}
