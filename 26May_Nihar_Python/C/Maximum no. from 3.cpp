//Maximum no. out of 3:-
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter 1st number:- ");
	scanf("%d",&a);
	printf("Enter 2nd number:- ");
	scanf("%d",&b);
	printf("Enter 3rd number:- ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("\nA is Maximum.");
	}
	else if(b>a && b>c)
	{
		printf("\nB is Maximum.");
	}
	else
	{
		printf("\nC is Maximum.");
	}
}
