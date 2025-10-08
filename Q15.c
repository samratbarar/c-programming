// WAP to print the Fibonacci series.

#include<stdio.h>

void main()
{
    int num, firstTerm, secondTerm, temp;

    printf("Enter the number upto which you want fibonacci series : ");
    scanf("%d",&num);

    firstTerm = 0;
    secondTerm = 1;

    for (int i = 0; i <= num; i++)
    {
        printf("%d , ",firstTerm);
        temp = secondTerm;
        secondTerm += firstTerm;
        firstTerm = temp;
    }
}