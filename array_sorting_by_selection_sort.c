// WAP to sort an array element using selection sort.

#include <stdio.h>

void main()
{
    int size, i, j, temp, smallestNumberIndex;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements : \n");

    // taking input for array

    for (i = 0; i < size; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &array[i]);
    }

    // comparing value in array and shifting smallest value at start doing this size-1 times

    for (i = 0; i < size - 1; i++)
    {
        smallestNumberIndex = i;

        for (j = 0; j < size - i - 1; j++) // j=i+1; j < size; j++
        {
            if (array[smallestNumberIndex] > array[size-j-1])   // array[smallestNumberIndex] > array[j]
            {
                smallestNumberIndex = size-j-1;  
            }
        }

        // swap the values

        temp = array[smallestNumberIndex];
        array[smallestNumberIndex] = array[i];
        array[i] = temp;
        
    }

    // printing the sorted array

    printf("Elements of array are\n");

    for (i = 0; i < size; i++)
    {
        printf("A[%d] = %d\n", i, array[i]);
    }
}