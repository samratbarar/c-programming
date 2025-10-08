// Program to find the area of triangle

#include<stdio.h>
#include<math.h>

void main()
{
    float firstSide, secondSide, thirdSide;
    float semiPeri, areaSquare, area;

    printf("Enter the first side of triangle ");
    scanf("%f",&firstSide);

    printf("Enter the second side of triangle ");
    scanf("%f",&secondSide);

    printf("Enter the third side of triangle ");
    scanf("%f",&thirdSide);

    semiPeri = ( firstSide + secondSide + thirdSide ) / 2;
    areaSquare = (semiPeri * (semiPeri-firstSide) * (semiPeri-secondSide) * (semiPeri-thirdSide) );
    area = sqrt(areaSquare);

    printf("The area of the triangle is %.2f",area);
}