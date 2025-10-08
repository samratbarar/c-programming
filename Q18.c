// WAP to find the reverse of a number

#include<stdio.h>

void main()
{
    int num, reverse, digit;
     
    printf("Enter the number : ");
    scanf("%d",&num);

    reverse = 0;
    
    for (int i = 0; num > 0; i++)
    {
        digit = num % 10;
        reverse = reverse*10 +digit;
        num = num /10;
    }
    
    printf("The reverse of a number is %d",reverse);
}