//Symbols using else-if:-
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
	if(ch=='+')
	{
		printf("\nSum = %d",a+b);
	}
	else if(ch=='-')
	{
		printf("\nSubtraction = %d",a-b);
	}
	else if(ch=='*')
	{
		printf("\nMultiply = %d",a*b);
	}
	else if(ch=='/')
	{
		printf("\nDivision = %d",a/b);
	}
	else
	{
		printf("\nError! Choose from the given Options...");
	}
}
