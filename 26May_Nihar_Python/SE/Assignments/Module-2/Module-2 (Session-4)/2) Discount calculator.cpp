/*2) Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember,
 use arithmetic and logical operators to calculate the final price (apply an extra 5% off if isMember is true).*/
#include<stdio.h>
int main()
{
    float price, discount, finalPrice;
    int isMember;
    printf("Enter Product Price:- ");
    scanf("%f", &price);
    printf("Enter Discount Percentage:- ");
    scanf("%f", &discount);
    printf("Are you a Member?(1=Yes, 0=No):- ");
    scanf("%d", &isMember);
    if(isMember != 0 && isMember != 1)
    {
        printf("\nPlease enter only (1 for Yes) or (0 for No)...");
        return 0;
    }
    finalPrice = price - (price * discount / 100);
    if(isMember == 1)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }
    printf("\n===================================");
    printf("\nFinal Price:- %.2f", finalPrice);
    return 0;
}
