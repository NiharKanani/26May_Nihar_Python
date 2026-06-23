//IF-else Statement:-
#include<stdio.h>
main()
{
	int n;
	printf("Enter any number:- ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("\nNumber is Positive...");
	}
	else if(n<0)
	{
		printf("\nNumber is Negative...");
	}
	else
	{
		printf("\nNumber is Zero...");
	}
}
