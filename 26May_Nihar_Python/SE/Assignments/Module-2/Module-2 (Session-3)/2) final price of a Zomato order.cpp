/*2) Create a constant variable to store the GST rate (for example, 18%)
 and use it to calculate the final price of a Zomato order with a given base price*/
 
#include<stdio.h>
main()
{
    const float GST_RATE = 18.0;
    float basePrice, gstAmount, finalPrice;
    printf("Enter the base price of the Zomato order: ");
    scanf("%f", &basePrice);
    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;
    printf("\nGST Rate = %.2f%%", GST_RATE);
    printf("\n\nBase Price = Rs. %.2f", basePrice);
    printf("\nGST Amount = Rs. +%.2f", gstAmount);
    printf("\n\n-------------------------------");
    printf("\nFinal Price = Rs. %.2f", finalPrice);
}
