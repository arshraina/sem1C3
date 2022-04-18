#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp, *fpp;
    fp = fopen("File.txt", "r");
    fpp = fopen("New_File.txt", "w");
    int line_num;
    char flag[100], text[30];
    printf("Enter the text\n");
    fgets(text, 30, stdin);
    printf("Enter the line number of the file\n");
    scanf("%d", &line_num);
    for (int i = 1; i <= 5; i++)
    {
        if (i == line_num)
        {
            fgets(flag, 100, fp);
            fputs(text, fpp);
        }
        else
        {
            fgets(flag, 100, fp);
            fputs(flag, fpp);
        }
    }
    fclose(fp);
    fclose(fpp);
    fp = fopen("File.txt", "w");
    fpp = fopen("New_File.txt", "r");
    for (int i = 1; i <= 5; i++)
    {
        fgets(flag, 100, fpp);
        fputs(flag, fp);
    }
    fclose(fp);
    fclose(fpp);
}