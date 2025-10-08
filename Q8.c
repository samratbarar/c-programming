// Program that finds whether a given number is even or odd.

#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("The given number is even ");
    }
    else{
        printf("The given number is odd ");
    }
}