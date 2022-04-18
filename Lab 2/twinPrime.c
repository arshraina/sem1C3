// Write a program which inputs two positive integers A and B and outputs all twin primes in range A to B.
#include<stdio.h> 

int primeCheck(int x);

int main(void) {
    int A, B, flag = 0;

    printf("Enter A and B separated by a comma: ");
    scanf("%d,%d", &A, &B);

    for(int i = A; i < B; i++) {
        if(primeCheck(i) && primeCheck(i + 2)) {
            printf("%d & %d\n", i, i + 2);
            flag = 1;
            i++; 
        }
    }
    if (flag == 0) {
        printf("No twin prime numbers in given range!\n");
    }

    return 0; 
}
int primeCheck(int x) {
    if(x == 1){
        return 0;
    }
    
    for(int i = 2; i < x; i++) {
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}