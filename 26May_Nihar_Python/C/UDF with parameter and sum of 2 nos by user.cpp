//UDF with parameter and Sum of 2 nos. given by user:-
#include<stdio.h>
void getsum(int a,int b)
{
	printf("\nSum:- %d",a+b);
}
main()
{
	int n1,n2;
	printf("Enter A:- ");
	scanf("%d",&n1);
	printf("\nEnter B:- ");
	scanf("%d",&n2);
	getsum(n1,n2);
}
