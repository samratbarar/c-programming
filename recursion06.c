// WAP to calculate the x^n (stack height = log(n))

# include <stdio.h>

int calXpowerN(int n, int x)
{
    if (n == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        printf("%d",x);
        return 0;
    }
    
    if (n % 2 == 0)
    {
        return calXpowerN(n/2,x) * calXpowerN(n/2,x);
    }
    else{
        return calXpowerN(n/2,x) * calXpowerN(n/2,x) * x;
    }

}

void main()
{
    int number, varX;

    printf("Enter the power n : ");
    scanf("%d",&number);

    printf("Enter the value of x : ");
    scanf("%d",&varX);

    printf("%d",calXpowerN(number,varX));
}  