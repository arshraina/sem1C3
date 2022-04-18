// Write a function to find the sum of the proper divisors of a given number ‘n’. 

#include<stdio.h>

int divisorCheck(int x, int y);

int main(void) {
    int sum = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n/2; i++){
        if(divisorCheck(i, n)) {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}

int divisorCheck(int x, int y) {
    if(y % x == 0) {
        return 1;
    }
    return 0;
}