#include<stdio.h>

int main(){
    float Celcius, Fahrenheit;
    printf("enter number in Celcius:");
    scanf("%f", &Celcius);

    Fahrenheit = (Celcius * 9/5) + 32;

    printf("In Fahrenheit = %.1f\n", Fahrenheit);

    printf("enter number in Fahrenheit:");
    scanf("%f", &Fahrenheit);

    Celcius = (Fahrenheit - 32) * 5/9;

    printf("In Celcius = %.1f", Celcius);
return 0;
}
