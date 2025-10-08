// Program to calculates the volume and surface area of sphere

#include<stdio.h>

void main()
{
    float radius, volume, surfaceArea;

    printf("Enter the radius of sphere ");
    scanf("%f",&radius);

    volume = (4 * 3.14 * radius * radius * radius) / 3;
    surfaceArea = 4 * 3.14 * radius * radius;

    printf("The volume and surface area of the sphere are %.2f and %.2f respectively",volume,surfaceArea);
}