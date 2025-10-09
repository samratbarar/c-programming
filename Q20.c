// 	WAP to convert binary number into decimal number and vice versa.			

#include<stdio.h>
#include<math.h>

void main()
{
    int binaryNumber, decimalNumber, convertToBinaryNum, convertToDecimalNum, count, checkBinary, digit;

    printf("Enter the decimal number ");
    scanf("%d",&decimalNumber);

    printf("Enter the binary number ");
    scanf("%d",&binaryNumber);

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
    
    // printf("The Conversion of entered decimal into binary is %d\n",convertToBinaryNum);
    printf("The Conversion of entered binary into decimal is %d",convertToDecimalNum);
}