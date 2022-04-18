#include <stdio.h>

struct members {
    char name[50];
    int age;
    char address[100];
    char active;
    char married;
    char wifeName[50];
    int childrenNumber;
    char childrenNames[50];
};

int main() {

    int n;
    printf("Enter the number of members: ");
    scanf("%d", &n);
    struct members man[n];

    for(int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", man[i].name);
        printf("Enter age: ");
        scanf("%d", &man[i].age);
        printf("Enter address: ");
        scanf("%s", man[i].address);
        printf("Is he an active member? (Y/N) ");
        getchar();
        scanf("%c", &man[i].active);
        printf("Is he married? (Y/N) ");
        getchar();
        scanf("%c", &man[i].married);
        if (man[i].married == 'Y') {
            printf("Enter name of wife: ");
            scanf("%s", man[i].wifeName);
            printf("Enter number of child: ");
            scanf("%d", &man[i].childrenNumber);
            printf("Enter names of children separated by comma: ");
            scanf("%s", man[i].childrenNames);
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s", man[i].name);
        printf("\n");
        printf("%d", man[i].age);
        printf("\n");
        printf("%s", man[i].address);
        printf("\n");
        printf("%c", man[i].active);
        printf("\n");
        printf("%c", man[i].married);
        printf("\n");
        if (man[i].married == 'Y') {
            printf("%s", man[i].wifeName);
            printf("\n");
            printf("%d", man[i].childrenNumber);
            printf("\n");
            printf("%s\n", man[i].childrenNames);
        }
        else {
            printf("NA");
            printf("\n");
            printf("NA");
            printf("\n");
            printf("NA");
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}