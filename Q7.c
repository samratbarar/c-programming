// Program to find the greatest of three numbers.

#include<stdio.h>

void main()
{
    int firstNum,secondNum,thirdNum;

    printf("Enter the first number ");
    scanf("%d",&firstNum);

    printf("Enter the second number ");
    scanf("%d",&secondNum);

    printf("Enter the third number ");
    scanf("%d",&thirdNum);

    if (firstNum > secondNum && firstNum > thirdNum)
    {
        printf("%d is greatest among these numbers ",firstNum);
    }
    else if (secondNum > firstNum && secondNum > thirdNum)
    {
        printf("%d is greatest among these numbers ",secondNum);
    }
    else if(thirdNum > firstNum && thirdNum > secondNum)
    {
        printf("%d is greatest among these numbers ",thirdNum);
    }
    else if (firstNum == secondNum && firstNum > thirdNum)
    {
        printf("%d and %d are equal and greater than %d",firstNum,secondNum,thirdNum);
    }
    else if(firstNum == thirdNum && firstNum > secondNum)
    {
        printf("%d and %d are equal and greater than %d",firstNum,thirdNum,secondNum);
    }
    else if(thirdNum == secondNum && thirdNum > firstNum)
    {
        printf("%d and %d are equal and greater than %d",firstNum,secondNum,thirdNum);
    }
    else{
        printf("All the given numbers are equal");
    }
    
}