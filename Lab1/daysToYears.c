#include<stdio.h>
//Write a C program to convert days into year, month and days.
int main()
{
    int numdays, years, months, days;

    printf("Number of days = ");
    scanf("%d", &numdays);

    years = numdays / 365;

    months = (numdays - years * 365) / 30;

    days = (numdays - years * 365 - months * 30);

    printf("Years = %d", years);
    printf("\tMonths = %d", months);
    printf("\tDays = %d\n", days);

    return 0;
}
