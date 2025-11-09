// WAP to sort the elements of the array in ascending order using Bubble Sort technique.

#include <stdio.h>

void main()
{
    int size, i, j, temp;

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

    // comparing adjacent value in array and shifting larger value at end doing this size-1 times

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // printing the sorted array

    printf("Elements of array are\n");

    for (i = 0; i < size; i++)
    {
        printf("A[%d] = %d\n", i, array[i]);
    }
}