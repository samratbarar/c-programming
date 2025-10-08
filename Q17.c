// WAP to find the sum of digits of the entered number.

#include<stdio.h>

void main()
{
    int num, sum, digit;
     
    printf("Enter the number : ");
    scanf("%d",&num);

    sum = 0;
    
    for (int i = 0; num > 0; i++)
    {
        digit = num % 10;
        sum += digit;
        num = num /10;
    }
    
    printf("The sum of digits of the entered number is %d",sum);
}