// Program to calculate the area and circumference of a circle.

#include<stdio.h>

void main()
{
    int radius;
    float area,circum;

    printf("Enter the value of radius ");
    scanf("%d",&radius);

    area = 3.14 * radius * radius;
    circum = 2 * 3.14 * radius;

    printf("The area and circumference of circle is %.2f and %.2f",area,circum);
}