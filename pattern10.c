/*
WAP to print butterfly pattern 
  *      *
  **    **
  ***  ***
  ********
  ********
  ***  ***
  **    **
  *      *
*/
#include <stdio.h>

void main()
{
    int height, i, j;

    printf("Enter the height of pattern : ");
    scanf("%d", &height);
    if (height % 2 == 0)
    {
        for (i = 1; i <= height; i++)
        {
            if (i <= height / 2)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                for (j = 1; j <= height - 2 * i; j++)
                {
                    printf(" ");
                }
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
            }
            else
            {
                for (j = 0; j <= height - i; j++)
                {
                    printf("*");
                }
                for (j = 0; j < 2 * i - 2 - height; j++)
                {
                    printf(" ");
                }
                for (j = 0; j <= height - i; j++)
                {
                    printf("*");
                }
            }

            printf("\n");
        }
    }

    else{
        for (i = 1; i <= height; i++)
        {
            if (i <= height / 2 + 1)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                for (j = 1; j <= height - 2 * i +1; j++)
                {
                    printf(" ");
                }
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
            }
            else
            {
                for (j = 0; j <= height - i; j++)
                {
                    printf("*");
                }
                for (j = 0; j < 2 * i - 1 - height; j++)
                {
                    printf(" ");
                }
                for (j = 0; j <= height - i; j++)
                {
                    printf("*");
                }
            }

            printf("\n");
        }
    }
}