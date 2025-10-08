// Program  that accepts the marks of 5 subjects and finds the sum and percentage marks obtained

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

    printf("The sum of marks is %.0f \n",sum);
    printf("The percentage obtained is %.2f",percent);
}



