// WAP that finds the sum of diagonal elements of an nxn matrix.

#include <stdio.h>

void main()
{
    int i, j, order, sum;

    // taking order of matrix

    printf("Enter the order of matrix : ");
    scanf("%d", &order);

    int matrix[order][order];

    // taking matrix

    for (i = 0; i < order; i++)
    {
        printf("Enter %d row of matrix\n", i + 1);

        for (j = 0; j < order; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // finding the sum of diagonal elements

    sum = 0;

    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            if ((i == j) || (i + j == order - 1))
            {
                sum += matrix[i][j];
            }
        }
    }

    // printing the sum of diagonal elements

    printf("The sum of the diagonal elements is %d", sum);
}