// WAP to add and multiply two matrices of order nxn.

#include <stdio.h>

void main()
{
    int order, i, j, k;

    // taking order of matrices
    printf("Enter the number of elements : ");
    scanf("%d", &order);

    int firstMatrix[order][order], secondMatrix[order][order], sumMatrix[order][order], multipleMatrix[order][order];

    // taking inputs for first matrix

    printf("Enter first matrix\n");

    for (i = 0; i < order; i++)
    {
        printf("Enter %d row of matrix\n",i+1);

        for (j = 0; j < order; j++)
        {

            scanf("%d", &firstMatrix[i][j]);
        }
        printf("\n");
    }

    // taking inputs for second matrix

    printf("Enter second matrix\n");
    
    for (i = 0; i < order; i++)
    {
        printf("Enter %d row of matrix\n",i+1);
        
        for (j = 0; j < order; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
        printf("\n");
    }

    // adding and multipling two matrices

    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            multipleMatrix[i][j] = 0;
            sumMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            for (k = 0; k < order; k++)
            {
                multipleMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // printing sum matrix

    printf("sum matrix \n");

    for (i = 0; i < order; i++)
    {
        for ( j = 0; j < order; j++)
        {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    // printing multiply matrix

    printf("Multiple matrix\n");

    for (i = 0; i < order; i++)
    {
        for ( j = 0; j < order; j++)
        {
            printf("%d\t", multipleMatrix[i][j]);
        }
        printf("\n");
    }
}