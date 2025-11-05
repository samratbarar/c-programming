/*
WAP to print pattern of Floyd's triangle
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

void main()
{
    int height, i, j, increseNumber;

    printf("Enter the height of the rectangle : ");
    scanf("%d", &height);

    increseNumber = 1;

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= i ; j++)
        {
           printf("%d ",increseNumber);
           increseNumber += 1;
        }
        printf("\n");
    }
}