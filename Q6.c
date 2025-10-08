// Program that checks whether the two numbers entered by the user are equal or not.

#include<stdio.h>

void main()
{
    int firstNum,secondNum;
    
    printf("Enter the first number ");
    scanf("%d",&firstNum);

    printf("Enter the second number ");
    scanf("%d",&secondNum);

    if (firstNum == secondNum)
    {
        printf("The two numbers are equal");
    }
    else{
        printf("The two numbers are not equal");
    }
}