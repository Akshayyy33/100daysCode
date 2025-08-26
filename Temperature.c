//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
#include<conio.h>
int main() 
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("\n Temperature in Fahrenheit = %f", fahrenheit);
    return 0;
}
