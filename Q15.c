// WAP to print the Fibonacci series.

#include<stdio.h>

void main()
{
    int num, firstTerm, secondTerm, nextTerm;

    printf("Enter the number upto which you want fibonacci series : ");
    scanf("%d",&num);

    firstTerm = 0;
    secondTerm = 1;

    for (int i = 1; i <= num; i++)
    {
        printf("%d , ",firstTerm);
        nextTerm = secondTerm;
        secondTerm += firstTerm;
        firstTerm = nextTerm;
    }
}