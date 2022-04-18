#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *x = arr, *y = arr + n - 1;
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    while (x < y)
    {
        int c = *x;
        *x = *y;
        *y = c;
        x++, y--;
    }
    printf("\nArray after swapping: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}