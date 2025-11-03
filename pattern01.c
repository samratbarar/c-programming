/*
WAP to printf pattern********upto n times-->
                     ********
                     ********
                     upto n times
*/ 
#include <stdio.h>

void main()
{
    int height;

    printf("Enter the height and width of pattern :");
    scanf("%d",&height);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
}