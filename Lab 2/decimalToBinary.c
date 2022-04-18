// Write a program to convert a decimal number to binary number.
#include <stdio.h>

int main() {
  int n,rem;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  int b = 0;
  int temp = n;
  int i = 1;

  while (n!=0) {
    rem = n % 2;
    n = n/2;
    b = b + rem * i;
    i = i * 10;
  }
  printf("decimal number %d in binary =  %d \n", temp, b);
  return 0;
}