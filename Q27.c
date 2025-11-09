// WAP that finds the sum of diagonal elements of an mxn matrix.

# include <stdio.h>

void main()
{
    int i, j, row, column, sumOfDiagonalElements, sum;

    // taking order of matrix

    printf("Enter the number of rows of matrix : ");
    scanf("%d",&row);

    printf("Enter the number of columns of matrix :");
    scanf("%d",&column); 

    int matrix[row][column];

    // taking matrix

     for (i = 0; i < row; i++)
    {
        printf("Enter %d row of matrix\n",i+1);

        for (j = 0; j < column; j++)
        {

            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // finding the sum of diagonal elements

    sum = 0;

    for ( i = 0; i < row && i < column; i++)
    {
        sum += matrix[i][i];
    }  

    // printing the sum of diagonal elements 

    printf("The sum of the diagonal elements is %d",sum);
}