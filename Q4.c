// Program that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9.

#include<stdio.h>

void main()
{
    float cel,fah;

    printf("Enter the value of temperature in centigrade ");
    scanf("%f",&cel);

    fah = (cel*9)/5 + 32;

    printf("The value of temperature in fahrenheit is %.2f ",fah);
}
 