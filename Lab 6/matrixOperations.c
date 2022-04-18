// Write a program to perform Matrix Addition, Subtraction, Multiplication, Transpose of Matrix and Frobenius Norm of Matrix. Dimensions of matrices will be decided by the user. 

#include <stdio.h>
#include <math.h>
#define pf printf
#define sf scanf

int row, col;
void printM(int m[row][col]);
void add(int m1[row][col], int m2[row][col]);
void sub(int m1[row][col], int m2[row][col]);
void mul(int m1[row][col], int m2[row][col]);
void trans(int m1[row][col], int m2[row][col]);
void norm(int m1[row][col], int m2[row][col]);

int main() {
    int choice;
    
    pf("Enter the rows and colums seprated by a comma: ");
    sf("%d,%d", &row, &col);

    int m1[row][col];
    int m2[row][col];
    

    for(int i = 0; i< row; i++) {
        for(int j = 0;j < col;j++) {
            pf("Enter value for m1[%d][%d]:", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            pf("Enter value for m2[%d][%d]:", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    pf("Matrix 1:\n");
    printM(m1);
    pf("Matrix 2:\n");
    printM(m2);

    pf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Transpose\n5 Norm\n");
    pf("\n");
    pf("What operation do want to perform?\n");
    sf("%d", &choice);
    if (choice == 1) {
        add(m1,m2);
    }
    else if (choice == 2) {
        sub(m1,m2);
    }
    else if (choice == 3) {
        mul(m1,m2);
    }
    else if (choice == 4) {
        trans(m1,m2);
    }
    else if (choice == 5) {
        norm(m1,m2);
    }
    return 0;
}

void add(int m1[row][col], int m2 [row][col]) {
    pf("\n");
    int m3[row][col];
    for(int i = 0; i< row; i++) {
        for(int j = 0; j < col; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printM(m3);
    pf("\n");
}

void sub(int m1[row][col], int m2 [row][col]) {
    pf("\n");
    int m3[row][col];
    for(int i = 0; i< row; i++) {
        for(int j = 0; j < col; j++) {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printM(m3);
    pf("\n");
}

void mul(int m1[row][col], int m2[row][col]) {
    int m3[row][col], sum = 0;
    if (row == col) {
        for(int i = 0; i< row; i++) {
            for(int j = 0; j < col; j++) {
                for(int k = 0; k < row; k++) {
                    sum += m1[i][k] * m2[k][j];
                }
                m3[i][j] = sum;
                sum = 0;
            }
        }
        printM(m3);
    }
    else {
        pf("Multiplication not possible!");
    }
}

void trans(int m1[row][col], int m2[row][col]) {
    int m3[row][col];
    int m4[row][col];
    for(int i = 0; i< row; i++) {
        for(int j = 0; j < col; j++) {
            m3[j][i] = m1[i][j];
            m4[j][i] = m2[i][j];
        }
    }
    pf("Transpose of Matrix 1\n");
    printM(m3);
    pf("\n");
    pf("Transpose of Matrix 2\n");
    printM(m4);
}

void norm(int m1[row][col], int m2[row][col]) {
    float s1 = 0;
    float s2 = 0;
    for(int i = 0; i< row; i++) {
        for(int j = 0; j < col; j++) {
            s1 += (m1[i][j])*(m1[i][j]);
            s2 += (m2[i][j])*(m2[i][j]);
        }
    }
    float n1 = sqrt(s1);
    float n2 = sqrt(s2);
    pf("Norm of Matrix 1\n");
    pf("%f", n1);
    pf("\n");
    pf("Norm of Matrix 2\n");
    pf("%f\n", n2);
}

void printM(int m[row][col]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            pf("%d ", m[i][j]);
            if(j == col-1){
                pf("\n");
            }
        }
    }
    pf("\n");
}