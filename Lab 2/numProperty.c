// There is a property that (10a+b)*(10c+d) =(10b+a)(10d+c) where a and b are unequal and c and d are also unequal. Write a program which outputs them all between 10 to 99.
#include <stdio.h>

int rev(int a);
int main() {
    for (int i = 10; i < 100; i++) {
        for (int j = 10; j < 100; j++) {
            if (i * j == rev(j) * rev(i) && i!= rev(i) && i!= rev(j) && j!= rev(j) && j!= rev(i)) {
                printf("%d,%d,%d,%d\n",i,j,rev(i),rev(j));
            }
        }
    }
}
int rev(int a) {
    int x1 = a % 10;
    int x2 = a/10;
    int r = x1 * 10 + x2;
    return r;
}