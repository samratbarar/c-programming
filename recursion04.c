// WAP to print fibonacci series till nth term using function

# include <stdio.h>

void printFibonacciSeries(int n, int i, int t1, int t2)
{

    if (i == 1)
    {
        printf("%d\t",t1);
        i+1;
    }
    if (i == n)
    {
        return;
    }
    
    printf("%d\t",t2);
    printFibonacciSeries(n,i+1,t2,t1+t2);
}

void main()
{
    int number;

    printf("Enter the number n upto which you wanted print series : ");
    scanf("%d",&number);

    printFibonacciSeries(number,1,0,1);
}