/*
WAP to print pattern
      1
     1  1
    1  2  1
   1  3  3  1
  1  4  6  4  1
 1  5 10 10  5  1

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
            printf("%d  ",i); // change here
        }
        
        printf("\n");
    }
}