#include<stdio.h>
#include<math.h>  
// Write a C program intrst.c that calculates the total interest income on amount Rupees 5 lakhs in a period of 10 years. Show the results for simple interest, compounded interest when the compounding is done annually, semi-annually, quarterly, monthly and daily. Assume that the interest rate is 3.5% per year.
int main()
{
    float p, n, r, q;
    // q – number of times interest compounds per year.
    p = 500000;
    r = 3.5;
    n = 10;
    float si = p*r*n;
    printf("Simple interest on Rs. 500000.00 in 10 years = %f\n", si);
    float a1 = (p * pow( (1 + (r/100)), (n * 1)) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded annually = %f\n", a1);
    float a2 = (p * pow( (1 + (r/200)), (n * 2) ) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded semi-annually = %f\n", a2);
    float a3 = (p * pow( (1 + (r/400)), (n * 4)) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded quarterly = %f\n", a3);
    float a4 = (p * pow( (1 + (r/1200)), (n * 12)) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded monthly = %f\n", a4);
    float a5 = (p * pow( (1 + (r/36500)), (n * 365)) - p);
    printf("Interest on Rs. 500000.00 in 10 years compounded daily = %f\n", a5);

    return 0;
}
