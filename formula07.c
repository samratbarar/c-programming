// Program to find the volume and surface area of cone

#include<stdio.h>
#include<math.h>

void main()
{
    float height, radius, volume, surfaceArea;
    
    printf("Enter the value of radius of the base of cone ");
    scanf("%f",&radius);

    printf("Enter the value of height of the cone ");
    scanf("%f",&height);

    volume = (3.14*radius*radius*height) / 3;
    surfaceArea = 3.14*radius*(radius+sqrt(radius*radius+height*height));
    
    printf("The volume and surface area of the cone are %.2f and %.2f respectively",volume,surfaceArea);
}