// WAP to print sum of n natural number using function

# include <stdio.h>

void printSum(int n, int sum)
{
    if(n == 0)
    {
        printf("sum of n natural numbers : %d",sum);
        return;
    }
    sum += n;
    printSum(n-1,sum);
}

void main()
{
    int number, sum;

    printf("Enter the number upto which you want sum of numbers : ");
    scanf("%d",&number);

    printSum(number,0);
}