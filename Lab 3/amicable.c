// Write a function which takes as parameters two positive integers and returns TRUE if the numbers are amicable and FALSE otherwise.
#include<stdio.h>

int divisorSum(int x);

int main(void) {
    int a,b;
    printf("Enter two numbers separated by comma: ");
    scanf("%d,%d",&a ,&b);
    if (a == divisorSum(b) || b == divisorSum(a)) {
        printf("TRUE\n");
    }
    else {
        printf("FALSE\n");
    }
}

int divisorSum(int x) {
    int sum = 0;
    for (int i = 0; i <= x/2; i++) {
        if (x % i == 0) {
            sum = sum + i;
        }
    }
    return sum;
}