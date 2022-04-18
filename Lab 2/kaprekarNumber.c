// Write a program to find out whether a number is kaprekar or not. 
#include <stdio.h>
#include <math.h>

int main() {
    int n, dig = 0, x, lhs, rhs, sq;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    sq = n * n;
    int temp = n;

    while (n != 0) {
        dig++;
        n = n/10;
    }
    x = pow (10,dig);
    rhs = sq % x;
    lhs = sq/x;
    if (temp == 1) {
        printf("It is Kaprekar number.\n");
    }
    else {
        if (temp == lhs + rhs) {
            printf("It is Kaprekar number.\n");
        }
        else {
            printf("Not Kaprekar number.\n");
        }
    }
    return 0;
}