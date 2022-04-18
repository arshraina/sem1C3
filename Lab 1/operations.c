#include <stdio.h>
//Write a C program to input 2 numbers. Perform addition, subtraction, multiplication, division and modulus and display output.
int main()  
{  
    int n1, n2;  
    float sum, diff, product, div, mod;  
    
    printf("Input any two numbers separated by comma : ");  
    scanf("%d,%d", &n1, &n2);  
   
    sum = n1 + n2;  
    diff = n1 - n2;  
    product = n1 * n2;  
    div = (float)n1 / n2;  
    mod = n1 % n2;  
    
    printf("Sum = %f\n", sum);  
    printf("Difference = %f\n", diff);  
    printf("Product = %f\n", product);  
    printf("Quotient = %f\n", div);  
    printf("Modulus = %f\n", mod);  
  
    return 0;   
} 