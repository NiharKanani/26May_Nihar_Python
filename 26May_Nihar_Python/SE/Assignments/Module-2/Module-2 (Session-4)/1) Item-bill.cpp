/*1) Create a simple JavaScript function called calculateTotal that takes two numbers:
 itemPrice and quantity, and returns the total bill amount using arithmetic operators.*/
#include<stdio.h>
float calculateTotal(float itemprice, int quantity)
{
    return itemprice * quantity;
}
main()
{
    int quan;
    float price, total;
    printf("Enter the Item Price:- ");
    scanf("%f", &price);
    printf("Enter Quantity:- ");
    scanf("%d", &quan);
    total = calculateTotal(price, quan);
    printf("\n===================================");
    printf("\n\tITEM BILL");
    printf("\n===================================");
    printf("\nItem Price :- %.2f", price);
    printf("\nQuantity   :- %d", quan);
    printf("\nTotal Bill :- %.2f", total);
}
