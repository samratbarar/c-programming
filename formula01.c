// Program to find area and perimeter of rectangle 

#include<stdio.h>

void main()
{
    int length,breadth,area,peri;

    printf("Enter the length ");
    scanf("%d",&length);

    printf("Enter the breadth ");
    scanf("%d",&breadth);

    area = length * breadth;

    peri = 2 * (length + breadth);
    
    printf("The area of rectangle is %d \n",area);
    printf("The perimeter of rectangle is %d",peri);
}