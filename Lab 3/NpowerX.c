#include<stdio.h>

int xn(int x, int n);

int main(void) {
    int num, power;
    printf("Enter power and number separated by comma: ");
    scanf("%d,%d", &power, &num);
    if (num == 0 || power == 0) {
        printf("Undefined");
    }
    else {
        printf("x^n: %d\n", xn(num, power));
    }
}

int xn(int x, int n) {
    int product = 1;
    int power = x;
    int m = n;
    while (m != 0) {
        if (m % 2 != 0) {
            product = product * power;
        }
        m = m/2;
        power = power * power;
    }
    return product;
}