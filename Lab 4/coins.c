#include<stdio.h>
int a=0,count=1;
int coins(int n,int c) {
    int coin,temp;
    while(count<=c) {
        scanf("%d",&coin);
        temp = n-(n/coin)*coin;
        a+=(n/coin);
        count++;
        coins(temp,c);
    }
    return a;
}
int main() {
    int n,dis;
    printf("Enter the amount:\n ");
    scanf("%d",&n);
    printf("Enter the number of distinct coins you have \n");
    scanf("%d",&dis);
    printf("Enter the value of these %d coins in decreasing order:\n ",dis);
    printf("Minimum number of coins required is: %d\n",coins(n,dis));
    return 0;
}

