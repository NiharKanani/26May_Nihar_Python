// UDF Making Calculator
#include<stdio.h>
void sum(int a,int b)
{
    printf("\nSum :- %d",a+b);
}
void sub(int a,int b)
{
    printf("\nSub. :- %d",a-b);
}
void mul(int a,int b)
{
    printf("\nMul. :- %d",a*b);
}
void divide(int a,int b)
{
    printf("\nDiv. :- %.2f",(float)a/b);
}
int main()
{
    int ch,n1,n2;
    printf("\n1) Add");
    printf("\n2) Sub.");
    printf("\n3) Mul.");
    printf("\n4) Div.");
    printf("\n5) Exit");
    printf("\n\nEnter Choice :- ");
    scanf("%d",&ch);
    printf("Enter A :- ");
    scanf("%d",&n1);
    printf("Enter B :- ");
    scanf("%d",&n2);
    switch(ch)
    {
        case 1:
            sum(n1,n2);
            break;
        case 2:
            sub(n1,n2);
            break;
        case 3:
            mul(n1,n2);
            break;
        case 4:
            divide(n1,n2);
            break;
        case 5:
            printf("\nProgram Exited...");
            break;
        default:
            printf("\nError! Enter number between 1 to 5...");
    }
    return 0;
}
