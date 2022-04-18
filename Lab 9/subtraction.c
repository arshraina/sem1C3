#include <stdio.h>

int main()
{
    int i, j, r, c;
    int a1[10][10], a2[10][10], sub[10][10];

    printf("Enter number of rows\n");
    scanf("%d", &r);

    printf("Enter number of columns\n");
    scanf("%d", &c);
    printf("Enter Matrix 1\n");
    for (i = 0; i <= r - 1; i++)
    {
        for (j = 0; j <= c - 1; j++)
        {
            printf("Enter no. for %d row %d columns", i + 1, j + 1);
            scanf("%d", (*(a1 + i) + j));
        }
        printf("\nYou have entered in next row:\n");
    }
    printf("Enter Matrix 2\n");
    for (i = 0; i <= r - 1; i++)
    {
        for (j = 0; j <= c - 1; j++)
        {
            printf("Enter number for %d row %d column", i + 1, j + 1);
            scanf("%d", (*(a2 + i) + j));
        }
        printf("\nYou have entered in next row\n");
    }
    for (i = 0; i <= r - 1; i++)
    {

        for (j = 0; j <= c - 1; j++)
        {
            *(*(sub + i) + j) = *(*(a1 + i) + j) - *(*(a2 + i) + j);
        }
    }
    printf("Subtraction of above matrices is\n");
    for (i = 0; i <= r - 1; i++)
    {
        for (j = 0; j <= c - 1; j++)
        {
            printf("%d\t", *(*(sub + i) + j));
        }
        printf("\n");
    }
    return 0;
}
