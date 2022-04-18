#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("vehicle.txt", "w+");

    printf("Enter no. of entries: ");
    int n;
    scanf("%d", &n);
    int rno[n];
    char name[20][20];
    char adr[20][20];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter registration no. of vehicle %d:\n", i + 1);
        scanf("%d", &rno[i]);
        printf("Enter name: ");
        scanf("%s", name[i]);
        printf("Enter address: ");
        scanf("%s", adr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d\t\t\t\t%s\t%s\n", rno[i], name[i], adr[i]);
    }
    int a;
    printf("Enter no. of searches: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Enter registration no.: ");
        int r;
        scanf("%d", &r);
        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%d", &rno[i]);
            if (r == rno[i])
            {
                printf("Name: %s\n", name[i]);
                printf("Address: %s\n", adr[i]);
                break;
            }
        }
        fclose(fp);
    }
}