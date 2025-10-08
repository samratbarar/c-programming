// Program to calculates volume and surface area of cylinder

#include<stdio.h>

void main()
{
    int radius, height, volume, surfaceArea;
     
    printf("Enter the value of radius of the cylinder ");
    scanf("%d",&radius);

    printf("Enter the value of height of the cylinder ");
    scanf("%d",&height);

    volume = 3.14 * radius * radius * height;
    surfaceArea = 2 * 3.14 * radius * (radius+height);

    printf("The volume and surface area of the cylinder are %d and %d respectively ",volume,surfaceArea);
}