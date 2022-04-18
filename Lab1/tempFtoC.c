#include<stdio.h>
// Write a C program temp.c that accepts a temperature in Fahrenheit and prints the corresponding temperature in Celsius.
int main()
{
    float far, cel;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &far);

    cel = ((far - 32) * 5/9);

    printf("Temperature in Celsius = %f\n", cel);
    
    return 0;
}
