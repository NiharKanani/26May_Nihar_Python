/*4 Subjects marks, print the total,
 find the PR, and based on PR print the result:-*/
#include<stdio.h>
main()
{
	int m1,m2,m3,m4,total;
	float pr;
	printf("Enter 1st Subject mark:- ");
	scanf("%d",&m1);
	printf("Enter 2nd Subject mark:- ");
	scanf("%d",&m2);
	printf("Enter 3rd Subject mark:- ");
	scanf("%d",&m3);
	printf("Enter 4th Subject mark:- ");
	scanf("%d",&m4);
	total=m1+m2+m3+m4;
	printf("\nTotal:- %d",total);
	pr=total/4;
	printf("\nPercentage:- %.2f",pr);
	if(m1>=40 && m2>=40 && m3>=40 && m4>=40)
	{
		if(pr>=70)
		{
			printf("\nYou are PASS. And got A Grade.");
		}
		else if(pr>=60 && pr<70)
		{
			printf("\nYou are PASS. And got B Grade.");
		}
		else if(pr>=50 && pr<60)
		{
			printf("\nYou are PASS. And got C Grade.");
		}
		else
		{
			printf("\nYou are PASS. And got D Grade.");
		}
	}
	else
	{
		printf("\nYou are FAIL.");
	}
}
