// Program that swaps values of two variables using a third variable.

#include<stdio.h>

void main()
{
    int firstNum,secondNum,temp;

    printf("Enter two numbers ");
    scanf("%d%d",&firstNum,&secondNum);

    temp = firstNum;
    firstNum= secondNum;
    secondNum = temp;

    printf("First number = %d and secondNum = %d",firstNum,secondNum);
}