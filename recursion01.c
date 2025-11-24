// WAP that prints number 1 to n using recursion

# include <stdio.h>

void printNumInDescendingOrder(int n)
{
    if (n==0)
    {
        return;
    }
    
    printf("%d\t",n);
    printNumInDescendingOrder(n-1);

}

void printNumInAscendingOrder(int i,int n)
{
    if (i == n+1)
    {
        return;
    }
    
    printf("%d\t",i);
    printNumInAscendingOrder(i+1,n);
}

void main()
{
    int number;

    printf("Enter the number upto to which you want to print : ");
    scanf("%d",&number);

    printNumInDescendingOrder(number);
    printNumInAscendingOrder(1,number);
}