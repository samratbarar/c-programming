// WAP to print sum of even and odd numbers from 1 to N numbers

#include<stdio.h>

void main()
{
    int num, sumEvenNum, sumOddNum;
    
    printf("Enter the number : ");
    scanf("%d",&num);

    sumEvenNum = 0;
    sumOddNum = 0;

    
    for (int i = 1; i <= num; i++)
    {
        if (i%2 == 0)
        {
            sumEvenNum += i;
        }
        else{
            sumOddNum += i;
        }
        
    }

    printf("The sum of even number is %d\n",sumEvenNum);
    printf("The sum of odd number is %d\n",sumOddNum);
}