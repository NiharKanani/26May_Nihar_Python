//Table:-
#include<stdio.h>
main()
{
	int i=1,t;
	printf("Enter number for Table:- ");
	scanf("%d",&t);
	while(i<=10)
	{
		printf("%d x %d = %d\n",t,i,t*i);
		i++;
	}
}
