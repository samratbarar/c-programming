// 	WAP to convert binary number into decimal number and vice versa.			

#include<stdio.h>
#include<math.h>

void main()
{
    int binaryNumber, decimalNumber, convertToBinaryNum, convertToDecimalNum, count, checkBinary, digit, checkDecimal, base, rem;

    printf("Enter the decimal number ");
    scanf("%d",&decimalNumber);

    printf("Enter the binary number ");
    scanf("%d",&binaryNumber);

    // convert to decimal number

    count = 0;
    checkBinary = binaryNumber;
    convertToDecimalNum = 0;

    for (int i = 0;checkBinary > 0; i++)
    {
        digit = checkBinary%10;
        convertToDecimalNum += pow(2,count)*digit;
        checkBinary /= 10;
        count = ++count;
    }

    // convert to binary number

    convertToBinaryNum = 0;
    checkDecimal = decimalNumber;
    base = 1;

    for (int i = 0; checkDecimal > 0; i++)
    {
        rem = checkDecimal % 2;
        convertToBinaryNum += rem * base;
        checkDecimal /= 2;
        base *= 10;
    }
        
    printf("The Conversion of decimal form of %d into binary form is %d\n",decimalNumber,convertToBinaryNum);
    printf("The Conversion of binary form of %d into decimal form is %d",binaryNumber,convertToDecimalNum);
}