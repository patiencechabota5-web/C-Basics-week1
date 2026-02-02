#include <stdio.h>

int main(){
    float num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%f",  &num1);
    printf(" enter second number: ");
    scanf("%f", &num2);
    printf(" choose operation (+, -, *, /): ");
    scanf(" %c", &op); 
    switch(op){	
    case '+':
    printf("result = %.f\n", num1 + num2);
   break;
    case '-':
    printf("result = %.f\n", num1 - num2);
   break;
    case '*':
    printf("result = %.f\n", num1 * num2);
   break;
    case '/':
    printf("result = %.f\n", num1 / num2);
     }
 return 0;
}
 
