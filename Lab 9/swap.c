#include <stdio.h>
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], si = 0, bi = 0;
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[si] > a[i])
        {
            si = i;
        }
        if (a[bi] < a[i])
        {
            bi = i;
        }
    }
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nArray after swapping: ");
    swap(&a[si], &a[bi]);
    for (int i = 0; i < n; i++)
    {
        printf("%2d\t", a[i]);
    }
}