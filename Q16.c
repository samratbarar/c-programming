// WAP to check whether the entered number is prime or not.

#include<stdio.h>

void main()
{
    int num, count, checkNum;

    printf("Enter the number : ");
    scanf("%d",&num);\

    count = 0;

    for (int i = 2; i <= num/2; i++)
    {
        checkNum = num % i;
        if (checkNum == 0)
        {
            count = ++count;
        }
        
    }
     
    if (count == 0){
        printf("The given number is prime ");
    }
    else {
        printf("The given number is not prime ");
    }
}