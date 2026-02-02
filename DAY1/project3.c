#include<stdio.h>

int main(){
    int num1, num2;
    int Sum, Difference, Product;
    float Quotient;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);

    Sum = num1 + num2;
    printf("Sum = %d\n", Sum);

    Difference = num1 - num2;
    printf("Difference = %d\n", Difference);

    Product = num1 * num2;
    printf("Product =  %d\n", Product);

    Quotient = (float)num1 / num2;
    if(num2 == 0){
    printf("error:division by 0 is not allowed");}
return 0;
}
