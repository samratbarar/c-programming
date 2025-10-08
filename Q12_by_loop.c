// WAP to print the sum of all numbers up to a given number.

#include<stdio.h>

void main()
{
    int num, sum;

    printf("Enter the number : ");
    scanf("%d",&num);

    sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("The sum of all numbers upto the given number is %d ",sum);
    
}