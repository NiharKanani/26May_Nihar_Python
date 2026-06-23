//Nested If Condition:-
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter 1st Number:- ");
	scanf("%d",&a);
	printf("Enter 2nd Number:- ");
	scanf("%d",&b);
	if(a>0 && b>0)
	{
		if(a>b)
		{
			printf("\nSum:- %d",a+b);
		}
		else
		{
			printf("\nMultiply:- %d",a*b);
		}
	}
	else
	{
		printf("\nEnter Positive Number...");
	}
}
