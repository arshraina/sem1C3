// Write a program which reads the current year followed by N followed by a list of N employee numbers and their current ages. Produce a list showing the years in which the employees retire (become 65 years old). If more than one employee retires in a given year then include them all under the same heading. 

#include <stdio.h>
int main() {
    int n, cYear;
    printf("Number of employees: ");
    scanf("%d",&n);
    printf("Current year: ");
    scanf("%d", &cYear);
    
    int arr [n][2];
    for (int i = 0; i < n; i++) {
        printf("Enter employee ID and age separated by comma: ");
        scanf("%d,%d", &arr[i][0], &arr[i][1]);
    }
   
    
    int min, pos = 0, temp = 0;
    for(int i = 0; i<n; i++)//Loop to sort the Matrix based on year
    {
        min = arr[i][1]; 
        for(int j = i; j<n; j++)//Loop to calculate next min value
        {
            if(arr[j][1]<=min)
            {
                min = arr[j][1];
                pos = j;
            }
        }
        //Swap(arr, k, pos);2
        for(int k = 0; k<2;k++)//Loop to swap Variables
        {
            temp = arr[i][k];
            arr[i][k] = arr[pos][k];
            arr[pos][k] = temp;
        }
    }
 
 
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            count = arr[i][1];
            printf("Year of retirement: %d \n", cYear + 65 - arr[i][1]);
            printf("Employees %d ", arr[i][0]);
        }
        else if (count == arr[i][1]) {
            printf("%d", arr[i][0]);
        }
        else {
            count = arr[i][1];
            printf("\nYear of retirement: %d \n", cYear + 65 - count);
            printf("Employees: %d", arr[i][0]);
        }
        
    }
}

