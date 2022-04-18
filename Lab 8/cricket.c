#include <stdio.h>

struct Cricket {
    char pName[50];
    char cName[50];
    int matches;
    int goals;
};

int main() {

    int n;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    struct Cricket player[n];

    for(int i = 0; i < n; i++) {
        printf("Enter player name: ");
        scanf("%s", player[i].pName);
        printf("Enter country name: ");
        scanf("%s", &player[i].cName);
        printf("Enter the number of matches played: ");
        scanf("%d", &player[i].matches);
        printf("Enter number of goals scored: ");
        scanf("%d", &player[i].goals);
    }

    for(int i = 0; i < n; i++) {
        printf("\n");
        printf("%s", player[i].pName);
        printf("\n");
        printf("%s", player[i].cName);
        printf("\n");
        printf("%d", player[i].matches);
        printf("\n");
        printf("%d", player[i].goals);
        printf("\n");
        printf("\n");
    }

}