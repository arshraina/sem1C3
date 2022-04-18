#include<stdio.h>
int main()
{
    float ang1, ang2, ang3;

    printf("Enter any two angles of the triangle(in degrees) separated by comma : ");
    scanf("%f,%f", &ang1, &ang2);

    ang3 = 180 - ang1 - ang2;

    printf("3rd angle of the triangle in degrees= %f\n", ang3);
    
    return 0;
}