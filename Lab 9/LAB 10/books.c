#include <stdio.h>
void main()
{
    FILE *fp, *fph, *fpp;
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    char new[n];
    fp = fopen("books.txt", "w");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", new);
        fprintf(fp, "%s \n", new);
    }
    fclose(fp);
    fp = fopen("books.txt", "r");
    fpp = fopen("paperback.txt", "w");
    fph = fopen("hardbacks.txt", "w");
    char books[100];
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%s", books);
        if (books[0] == 'p')
        {
            fprintf(fpp, "%s \n", books);
        }
        if (books[0] == 'h')
        {
            fprintf(fph, "%s \n", books);
        }

        if (books[0] == 'b')
        {
            fprintf(fpp, "%s \n", books);
            fprintf(fph, "%s \n", books);
        }
    }
    fclose(fp);
    fclose(fpp);
    fclose(fph);
}