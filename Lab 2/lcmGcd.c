// Take two numbers as input and calculate their LCM and GCD (HCF).
#include <stdio.h>  
  
int main() {
    int n1, n2, gcd, lcm, i = 1, small;
      
    printf("Enter 2 integer numbers separate by comma\n");  
    scanf("%d,%d", &n1, &n2);

    if (n1 > n2) {
        small = n2;
    }
    else {
        small = n1;
    }

    while(i <= small) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }  
        i++; 
    }
    lcm = ( n1 * n2 ) / gcd;  
  
    printf("GCD = %d\nLCM = %d\n", gcd, lcm);  
  
    return 0;
}
 