// Program that checks whether the two numbers entered by the user are equal or not using variable.

#include<stdio.h>

void main()
{
    int firstNum,secondNum,isEqual;

    printf("Enter the first number ");
    scanf("%d",&firstNum);

    printf("Enter the second number ");
    scanf("%d",&secondNum);
    
    isEqual = firstNum == secondNum;

    printf("Here 1 means entered two number are equal\n");
    printf("and 0 means entered two number are not equal \n");

    printf("%d",isEqual);
}