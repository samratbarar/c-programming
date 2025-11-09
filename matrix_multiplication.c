// WAP to add and multiply two matrices of order nxn.

#include <stdio.h>

void main()
{
    int rowOfFirstMatrix, columnOfFirstMatrix, rowOfSecondMatrix, columnOfSecondMatrix, i, j, k, choice;

    rePerform :

    // taking order of matrices
    printf("Enter the number of row of first matrix : ");
    scanf("%d", &rowOfFirstMatrix);

    printf("Enter the number of column of first matrix : ");
    scanf("%d", &columnOfFirstMatrix);

    printf("Enter the number of row of second matrix : ");
    scanf("%d", &rowOfSecondMatrix);

    printf("Enter the number of column of second matrix : ");
    scanf("%d", &columnOfSecondMatrix);

    int firstMatrix[rowOfFirstMatrix][columnOfFirstMatrix],
        secondMatrix[rowOfSecondMatrix][columnOfSecondMatrix],
        multipleMatrix[rowOfFirstMatrix][columnOfSecondMatrix];

    if (columnOfFirstMatrix == rowOfSecondMatrix)
    {
        // taking inputs for first matrix

        printf("Enter first matrix\n");

        for (i = 0; i < rowOfFirstMatrix; i++)
        {
            printf("Enter %d row of matrix\n", i + 1);

            for (j = 0; j < columnOfFirstMatrix; j++)
            {

                scanf("%d", &firstMatrix[i][j]);
            }
            printf("\n");
        }

        // taking inputs for second matrix

        printf("Enter second matrix\n");

        for (i = 0; i < rowOfSecondMatrix; i++)
        {
            printf("Enter %d row of matrix\n", i + 1);

            for (j = 0; j < columnOfSecondMatrix; j++)
            {
                scanf("%d", &secondMatrix[i][j]);
            }
            printf("\n");
        }

        // adding and multipling two matrices

        for (i = 0; i < rowOfFirstMatrix; i++)
        {
            for (j = 0; j < columnOfSecondMatrix; j++)
            {
                multipleMatrix[i][j] = 0;
                for (k = 0; k < rowOfSecondMatrix; k++)
                {
                    multipleMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }

        // printing multiply matrix

        printf("Multiple matrix\n");

        for (i = 0; i < rowOfFirstMatrix; i++)
        {
            for (j = 0; j < columnOfSecondMatrix; j++)
            {
                printf("%d\t", multipleMatrix[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("For matrix multiplication, The column of first matrix is equal to the row of second matrix\n");
        printf("Want to Re enter the order of two matrices\nEnter 1 for yes and 0 for no\n");
        scanf("%d",&choice);
    }
    
    if (choice)
    {
        goto rePerform;
    }
}