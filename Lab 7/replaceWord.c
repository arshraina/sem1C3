#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf

int main() {
    char sen[100], rwd[100], awd[100];
    pf("enter sentence: ");
    scanf("%[^\n]s", sen);
    pf("enter word to find: ");
    getchar();
    sf("%[^\n]s", rwd);
    pf("enter word to be replace: ");
    getchar();
    sf("%[^\n]s", awd);

    for(int i = 0; sen[i] != '\0'; i++) {
        int check = 0;
        if(sen[i] == rwd[0]) {
            for (int j = 0; rwd[j] != '\0'; j++) {
                if( sen[i+j] == rwd[j]) {
                    check = 1;
                }
                else {
                    check = 0;
                    break;
                }
            }
        }
        else {
            continue;
        }
        if(check == 1) {
            int j=0;
            for(j = 0; rwd[j] != '\0'; j++) {
                if(awd[j] == '\0') {
                    sen[i+j] = sen[i+j+1];
                }
                else {
                    sen[i+j] = awd[j];
                }
            }
            i = i + j-1;
        }
    }
    for(int i = 0; sen[i] != '\0'; i++) {
        pf("%c", sen[i]);
    }
    pf("\n");
    return 0;
}