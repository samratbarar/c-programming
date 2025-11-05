/*
WAP to print diamond pattern
      *
     ***
    *****
   *******
    *****
     ***
      * 
*/

# include <stdio.h>

void main()
{
    int height, i, j;

    printf("Enter the height of the pattern : ");
    scanf("%d",&height);

    for ( i = 1; i <= height; i++)
    {
        for ( j = 0; j < height-i; j++)
        {
            printf(" ");
        }
        
        for ( j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    for ( i = height-1; i > 0; i--)
    {
        for ( j = 0; j < height-i; j++)
        {
            printf(" ");
        }
        
        for ( j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}