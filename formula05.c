// Program to find the area of a Rhombus

#include<stdio.h>

void main()
{
    float firstDiagonal, secondDiagonal, area;

    printf("Enter the value of first diagonal ");
    scanf("%f",&firstDiagonal);

    printf("Enter the value of second diagonal ");
    scanf("%f",&secondDiagonal);

    area = (firstDiagonal*secondDiagonal) / 2;

    printf("The area of rhombus is %.2f",area);
}