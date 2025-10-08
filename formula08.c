// Program to find the volume and surface area of cuboid

#include<stdio.h>

void main()
{
    int length, breadth, height, volume, surfaceArea;

    printf("Enter the value of length of cuboid ");
    scanf("%d",&length);

    printf("Enter the value of breadth of cuboid ");
    scanf("%d",&breadth);

    printf("Enter the value of height of cuboid ");
    scanf("%d",&height);

    volume = length * breadth * height;
    surfaceArea = 2 * (length*breadth + length*height + breadth*height);

    printf("The volume and surface area of the cuboid are %d and %d respectively",volume,surfaceArea);
}