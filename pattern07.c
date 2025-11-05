/*
WAP to print pattern of hollow rectangle
    *****
    *   *
    *   *
    *****
*/

#include <stdio.h>

void main()
{
    int height, width, i, j;

    printf("Enter the height of the rectangle : ");
    scanf("%d", &height);

    printf("Enter the width of the rectangle : ");
    scanf("%d", &width);

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= width; j++)
        {
            if (i == 1 || i == height || j == 1 || j == width)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}