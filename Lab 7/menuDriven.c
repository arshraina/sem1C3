#include <stdio.h>
#define pf printf
#define sf scanf

int strl(char x[]);
void cpy();
void len();
void comp();
void rev();
void concat();
void toUpper();
int flag = 1;

int main() {
    pf("\n");
    while(flag == 1) {
        pf("\n1 Copy one string to another one by one character\n2 Find the string length\n3 Compare two strings\n4 Reverse the string\n5 Concatenate one string to another string\n6 Lower case to upper\n7 Exit");
        pf("\n");
        pf("Choose an option: ");
        int ch;
        sf("%d", &ch);
        switch (ch)
        {
        case 1:
            cpy();
            break;
        case 2:
            len();
            break;
        case 3:
            comp();
            break;
        case 4:
            rev();
            break;
        case 5:
            concat();
            break;
        case 6:
            toUpper();
            break;
        case 7:
            flag = 0;
        }
    }
    return 0;
}

int strl(char x[]) {
    int l = 0;
    for (int i = 0; x[i] != '\0'; ++i) {
        l++;
    }
    return l;
    
}

void cpy() {
    char string1[100];
    char string2[100];
    pf("\nEnter string 1: ");
    sf("%s", string1);
    int a = strl(string1);
    for(int i  = 0; i < a; i++) {
        string2[i] = string1[i];
    }
    pf("string1 = %s\n", string1);
    pf("string2 = %s\n", string2);
    pf("Copied!\n");
}

void len() {
    char string[100];
    pf("\nEnter a string: ");
    scanf("%s", string);
    int length = 0;
    for(int i = 0; string[i] != '\0'; ++i) {
        length++;
    }
    pf("length = %d\n", length);
}

void comp() {
    char string1[100];
    char string2[100];
    int counter = 0;
    pf("\nEnter string 1: ");
    sf("%s", string1);
    pf("Enter string 2: ");
    sf("%s", string2);
    int x = strl(string1);
    int y = strl(string2);
    if(x != y) {
        pf("strings not equal\n");
    }
    else {
        for(int i = 0; i < strl(string1); i++) {
            if(string1[i] == string2[i]) {
                counter++;
            }
        }
        if(counter == strl(string1)) {
            pf("two strings are same\n");
        }
        else {
            pf("two strings are not same\n");
        }
    }
}

void rev() {
    char string1[100];
    char string2[100];
    pf("\nEnter string: ");
    sf("%s", string1);
    int l = strl(string1);
    for(int i = 0; i < l; i++) {
        string2[i] = string1[l-i-1];
    }
    for(int j = 0; j < l; j++) {
        pf("%c", string2[j]);
    }
}

void concat() {
    char string1[100];
    char string2[100];
    char string3[100];
    pf("\nEnter string1: ");
    sf("%s", string1);
    pf("Enter string2: ");
    sf("%s", string2);
    int x = strl(string1);
    int y = strl(string2);
    for (int i = 0; i < x; i++) {
        string3[i] = string1[i];
    }
    for (int i = 0; i < y; i++) {
        if(string2[i] != '\0') {
            string3[x+i] = string2[i];
        }
    }
    pf("string2 concatenated to string1: ");
    for(int k = 0; k < x+y; k++) {
        pf("%c", string3[k]);
    }
}

void toUpper() {
    char string1[100];
    char string2[100];
    pf("Enter string: ");
    sf("%s", string1);
    for(int i = 0; string1[i] != '\0'; i++) {
        if(string1[i] >= 'a' && string1[i] <= 'z') {
            string2[i] = string1[i] - 32;
        }
        else if(string1[i] >= 'A' && string2[i] <= 'Z') {
            string2[i] = string1[i] + 32;
        }
    }
    pf("\nUpper case: %s", string2);
}