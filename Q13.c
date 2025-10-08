// WAP to find the factorial of a given number.

#include<stdio.h>

void main()
{
    int num, factorial;

    printf("Enter the number of which factorial you want to find : ");
    scanf("%d",&num);

    factorial = 1;

    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }

    printf("The Factoial of the given number is %d ",factorial);
    
}