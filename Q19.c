// WAP to print Armstrong numbers from 1 to 100.

#include <stdio.h>
#include <math.h>

void main()
{
    int sum, checkNum, digit, countDigit, num;
    
    printf("Enter the number : ");
    scanf("%d", &num);

    sum = 0;

    for (int i = 1; i <= num; i++)
    {
        checkNum = i;
        countDigit = 0;

        while(checkNum > 0)
        {
            checkNum /= 10;
            countDigit = ++countDigit;
        }

        checkNum = i;

        while(checkNum > 0)
        {
            digit = checkNum % 10;
            sum += pow(digit,countDigit);
            checkNum /= 10;
        }
        
        if (sum==i)
        {
            printf("%d, ", i);
        }

        sum = 0;
    }
}