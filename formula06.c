// Program to find the area of a Trapezium

#include<stdio.h>

void main()
{
    float firstParallelSide, secondParallelSide, height, area;

    printf("Enter the value of first parallel side ");
    scanf("%f",&firstParallelSide);

    printf("Enter the value of second parallel side ");
    scanf("%f",&secondParallelSide);

    printf("Enter the value of height  ");
    scanf("%f",&height);

    area = ( (firstParallelSide+secondParallelSide)*height) / 2;

    printf("The area of trapezium is %.2f ",area);
}