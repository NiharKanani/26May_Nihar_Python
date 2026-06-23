//Switch Case:-
#include<stdio.h>
main()
{
	int a,b,ch;
	printf("Enter 1st Number:- ");
	scanf("%d",&a);
	printf("Enter 2nd Number:- ");
	scanf("%d",&b);
	printf("\n1)Addition(+)");
	printf("\n2)Subtraction(-)");
	printf("\n3)Multiply(*)");
	printf("\n4)Division(/)");
	printf("\n\nEnter Choice:- ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nAddition = %d",a+b);
			break;
		case 2:
			printf("\nSubtraction = %d",a-b);
			break;
		case 3:
			printf("\nMultiply = %d",a*b);
			break;
		case 4:
			printf("\nDivision = %d",a/b);
			break;
		default:
			printf("\nError! Choose from the given Options...");
	}
}
