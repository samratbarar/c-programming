/*
WAP to print pattern of Floyd's triangle
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <stdio.h>

void main()
{
    int height, i, j;

    printf("Enter the height of the rectangle : ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= i ; j++)
        {
            if ((i+j)%2==0)
            {
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}