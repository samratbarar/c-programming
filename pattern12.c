/*
WAP to print number pyramid
        1
       2 2
      3 3 3  
     4 4 4 4
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
        
        for ( j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        
        printf("\n");
    }
    
}