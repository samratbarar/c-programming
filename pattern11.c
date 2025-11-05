/*
WAP to print solid Rhombus
    *****
   *****
  *****
 *****
*****  
*/

# include <stdio.h>

void main()
{
    int height, i, j;

    printf("Enter the height of pattern : ");
    scanf("%d",&height);

    for ( i = 1; i <= height; i++)
    {
        for ( j = 0; j < height-i; j++)
        {
            printf(" ");
        }
        
        for ( j = 0; j < height; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}