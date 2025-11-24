// WAP to print factorial of number n

# include <stdio.h>

void printFact(int n, int fact)
{
    if (n == 1 || n == 0)
    {
        printf("Factorial of given number = %d",fact);
        return;
    }
    
    fact *= n;
    printFact(n-1,fact);
}

void main()
{
    int number;

    printf("Enter the number of which factorial is required : ");
    scanf("%d",&number);
    
    printFact(number,1);
}