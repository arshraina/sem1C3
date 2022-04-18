// Ackerman’s function is defined by:
// A(m,n)=n+1 if m=0
// =A(m-1,1) if m≠0 and n=0
// =A(m-1, A(m,n-1)) if m≠0 and n≠0
// Write a function which given m and n returns A(m,n). Tabulate the values of A(m,n) for all
// m in the range 1 to 3 and all n in the range 1 to 10.
#include <stdio.h>

int ackerman(int m, int n);

int main(){
    int m, n, a;
    while(1){
        for(m=1; m<=3; m++){
            for(n=1; n<=6; n++){
                printf("The numbers are %d and %d. \nResult: ", m, n);
                a=ackerman(m,n);
                printf("%d \n\n", a);
            }
        }
        return 0;
    }
}

int ackerman(int m, int n){
    if(m==0){
        return n+1;
    }
    else if((m>0) && (n==0)){
        return ackerman(m-1, 1);
    }
    else if(m>0 && n>0){
        return ackerman(m-1, ackerman(m, n-1));
    }
}

