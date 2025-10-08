// Program to find the area of a Parallelogram

#include<stdio.h>

void main()
{
    int base, height, area;

    printf("Enter the value of base of parallelogram ");
    scanf("%d",&base);

    printf("Enter the value of height of parallelogram ");
    scanf("%d",&height);

    area = base * height;

    printf("The area of the parallelogram is %d",area);
}