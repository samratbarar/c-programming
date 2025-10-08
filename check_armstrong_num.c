// WAP to check wheather entered number is Armstrong number or not.

#include<stdio.h>
#include<math.h>

void main()
{
    int num, sum, checkNum, digit, checkCount, count;

    printf("Enter the number : ");
    scanf("%d",&num);

    sum = 0;
    checkNum = num;
    checkCount = num;
    count = 0;

    for (int j = 0; checkCount > 0; j++)
    {
        checkCount /= 10;
        count = ++count;
    }
    

    for (int i = 0; checkNum > 0; i++)
    {
        digit = checkNum % 10;
        sum += pow(digit,count);
        checkNum /= 10;
    }
    
    if (sum==num)
    {
        printf("The entered number is armstrong number ");
    }
    else {
        printf("The entered number is not armstrong number ");
    }
}