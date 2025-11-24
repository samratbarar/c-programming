// WAP to calculate the x^n (stack height = n)

# include <stdio.h>

void calXpowerN(int n, int x, int XpowerN)
{
    if (n == 0)
    {
        printf("%d",XpowerN);
        return;
    }
    if (x == 0)
    {
        printf("%d",x);
        return;
    }
    
    XpowerN *= x;
    calXpowerN(n-1,x,XpowerN);
}

void main()
{
    int number, varX;

    printf("Enter the power n : ");
    scanf("%d",&number);

    printf("Enter the value of x : ");
    scanf("%d",&varX);
    
    calXpowerN(number,varX,1);
}