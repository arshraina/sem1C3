// Write a function which takes a range as input. Print all the numbers in the range with ‘*’ in front of prime numbers only.
#include<stdio.h>
int primeCheck(int x);

int main(void) {
    int start, end;
    printf("Enter the start and end number separated by comma: ");
    scanf("%d,%d",&start ,&end);
    for(int i = start; i <= end; i++) {
        if(primeCheck(i)) {
            printf("%d*\t", i);
        }
        else {
            if (i % 10 == 0){
                printf("%d\n", i);
            }
            else{
                printf("%d\t", i);
            }
            
        }
    }
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