// Given a number n, print following a pattern without using any loop. 
// Example:
// Input: n = 16
// Output: 16, 11, 6, 1, -4, 1, 6, 11, 16
// Input: n = 10
// Output: 10, 5, 0, 5, 10
#include <stdio.h>

void pattern(int x);
int n;

int main() {
    printf("Enter a number");
    scanf("%d", &n);
    pattern(n);
    return 0;
}

void pattern(int x) {
    if (x <= 0) {
       printf("%d ", x);
       return;
    }
    printf("%d ", x);
        pattern(x-5);
    printf("%d ", x);
}