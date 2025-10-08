/*
Program that takes two operands and one operator from the user, perform the operation,
and prints the result by using Switch statement.
*/

#include <stdio.h>

void main()
{
    int firstOperand, secondOperand, sum, subtract, multiply, modulus;
    float divide;
    char operator;

    printf("Enter the operator : ");
    scanf("%c", &operator);

    printf("Enter the fisrt operand : ");
    scanf("%d", &firstOperand);

    printf("Enter the second operand : ");
    scanf("%d", &secondOperand);

    switch (operator)
    {
    case '+':
        sum = firstOperand + secondOperand;
        printf("The addition of two operands is %d", sum);
        break;

    case '-':
        subtract = (firstOperand > secondOperand) ? (firstOperand - secondOperand) : (secondOperand - firstOperand);
        printf("The subraction of two operands is %d", subtract);
        break;

    case '*':
        multiply = firstOperand * secondOperand;
        printf("The multiplication of two operands is %d", multiply);
        break;

    case '/':
        if (secondOperand != 0)
        {
            divide = firstOperand / (float)secondOperand;
            printf("The division of two operands is %.2f", divide);
            break;
        }
        else
        {
            printf("Not exist");
        }

    case '%':
        modulus = firstOperand % secondOperand;

        printf("The modulus of two operands is %d", modulus);
        break;

    default:
        printf("The operator is not valid");
    }
}