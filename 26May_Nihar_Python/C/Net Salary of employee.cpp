//Net Salary:-
#include<stdio.h>
main()
{
	int sal;
	float DA,SA,PT,netsal;
	printf("Enter your salary:- ");
	scanf("%d",&sal);
	if(sal<=20000 && sal<40000)
	{
		DA=sal*0.10;
		SA=sal*0.20;
		PT=sal*0.05;
	}
	else if(sal>=40000 && sal<60000)
	{
		DA=sal*0.20;
		SA=sal*0.25;
		PT=sal*0.10;
	}
	else
	{
		DA=sal*0.30;
		SA=sal*0.30;
		PT=sal*0.15;
	}
	netsal=(sal+DA+SA)-PT;
	printf("\nSALARY SLIP\n");
	printf("\n-------------------------\n");
	printf("\nBasic Salary:- %d",sal);
	printf("\nDA:- %.2f",DA);
	printf("\nSA:- %.2f",SA);
	printf("\nPT:- %.2f",PT);
	printf("\n-------------------------\n");
	printf("\n\nNet Salary:- %.2f",netsal);
}
