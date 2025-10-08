/*
Program that accepts marks of five subjects and finds percentage and prints grades 
according to the following criteria:  
Between 90-100%-----Print ‘A’  
80-90%-----------------Print ‘B’  
60-80%-----------------Print ‘C’  
Below 60%-------------Print ‘D’  
*/

#include<stdio.h>

void main()
{
    float m1,m2,m3,m4,m5,sum,percent;

    printf("Enter obtained marks in first subject ");
    scanf("%f",&m1);

    printf("Enter obtained marks in second subject ");
    scanf("%f",&m2);

    printf("Enter obtained marks in third subject ");
    scanf("%f",&m3);

    printf("Enter obtained marks in fourth subject ");
    scanf("%f",&m4);

    printf("Enter obtained marks in fiveth subject ");
    scanf("%f",&m5);

    sum = (m1+m2+m3+m4+m5);
    percent = ((m1+m2+m3+m4+m5)*100) / 500;

    if (percent>90)
    {
        printf("The grade obtained is A ");
    }
    else if (percent>80 && percent<=90)
    {
        printf("The grade obtained is B ");
    }
    else if (percent>60 && percent<=80)
    {
        printf("The grade obtained is C ");
    }
    else{
        printf("The grade obtained is D ");
    }
}