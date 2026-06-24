/*1) Flipkart product: productName (as a string), price (float), and rating (double).
 Assign sample values and print each variable with its data type:-*/
#include <stdio.h>
main()
{
    char prdt[] = "TV";
    float price = 199998.9f;
    float rate = 4.9;
    printf("Product Name = %s\n", prdt);
    printf("Data Type = char[] (string)\n");
    printf("Sizeof = %zu bytes\n\n", sizeof(prdt));
    printf("Price = Rs.%.2f\n", price);
    printf("Data Type = float\n");
    printf("Sizeof = %zu bytes\n\n", sizeof(price));
    printf("Rate = %.1f\n", rate);
    printf("Data Type = float\n");
    printf("Sizeof = %zu bytes\n", sizeof(rate));
}
