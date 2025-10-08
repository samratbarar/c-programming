// WAP to print Armstrong numbers from 1 to 100.

#include <stdio.h>
#include <math.h>

void main()
{
    int sum, checkNum, digit, count, checkCount, num;
    
    printf("Enter the number : ");
    scanf("%d", &num);

    sum = 0;

    for (int i = 1; i <= num; i++)
    {
        checkNum = i;
        checkCount = i;
        count = 0;

        for (int k = 0; checkCount > 0; k++)
        {
            checkCount /= 10;
            count = ++count;
        }

        for (int j = 0; checkNum > 0; j++)
        {
            digit = checkNum % 10;
            sum += pow(digit,count);
            checkNum /= 10;
        }
        
        if (sum==i)
        {
            printf("%d, ", i);
        }

        sum = 0;
    }
}