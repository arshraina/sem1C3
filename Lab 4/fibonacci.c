#include<stdio.h>
 
int fibonacci(int n);
 
int main() {
   int n;
   printf("Value of n = ");
   scanf("%d", &n);
   printf("%d\n", fibonacci(n));
} 
 
int fibonacci(int n) {
   if (n < 2) {
      return n;
   }
   return  fibonacci(n-1) + fibonacci(n-2);
} 