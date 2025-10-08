// Program to find square of (a+b)

#include<stdio.h>
#include<math.h>

void main()
{
    int firstNum,secondNum,identity;

    printf("Enter the value of first number ");
    scanf("%d",&firstNum);

    printf("Enter the value of second number ");
    scanf("%d",&secondNum);
    
    identity = pow((firstNum+secondNum),2);

    printf("The square of addition of first and second is %d ",identity);
}