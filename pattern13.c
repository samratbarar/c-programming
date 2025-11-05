/*
WAP to print palindromic pattern
        1
       212
      32123 
     4321234
*/

# include <stdio.h>

void main()
{
    int height, i, j;

    printf("Enter the height of the pattern : ");
    scanf("%d",&height);

    for ( i = 1; i <= height; i++)
    {
        for ( j = 1; j <= height-i; j++)
        {
            printf(" ");
        }
        
        for ( j = i; j >= 1; j--)
        {
            printf("%d",j);
        }

        for ( j = 2; j <= i; j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }
    
}