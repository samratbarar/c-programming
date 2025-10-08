// Program that calculates the Simple Interest and Compound Interest. The Principal Amount, Rate of Interest and Time are entered through the keyboard.

#include<stdio.h>
#include<math.h>

void main()
{
    float princiAmt,rate,time,SI,CI;

    printf("Enter the principal amount ");
    scanf("%f",&princiAmt);

    printf("Enter the rate of interest(in percentage) ");
    scanf("%f",&rate);

    printf("Enter the time(in years) ");
    scanf("%f",&time);

    SI = (princiAmt*rate*time)/100 ;

    CI = princiAmt*pow((1+(rate/100)),time)-princiAmt;

    printf("The simple interest is %.f \n",SI);
    printf("The Compound interest is %.2f ",CI);
}