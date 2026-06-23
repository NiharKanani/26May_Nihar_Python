//Convert Temperature from cel. to feh.:-
#include<stdio.h>
main()
{
	float c,f;
	printf("Enter celcius:- ");
	scanf("%f",&c);
	f=c*(1.8)+32;
	printf("\nFahrenheit:- %.2f",f);
}
