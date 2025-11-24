// WAP to  arrange the elements of an array using insertion sort techniques.

#include <stdio.h>

void main()
{
    int length, i, j, current;

    printf("Enter the number of elements : ");
    scanf("%d", &length);

    int array[length];

    printf("Enter elements : \n");

    // taking input for array

    for (i = 0; i < length; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &array[i]);
    }

    /* 
    Sorting by dividing the array into two part as sorted and unsorted.
    Taking first element in sorted part and remaining all elements in unsorted part.
    */

    for ( i = 1; i <= length; i++)
    {
        current = array[i];
        for ( j = i-1; j>=0 && current < array[j]; j--)
        {
            array[j+1] = array[j];
        }
        
        // placement

        array[j+1] = current;
    }

    // printing sorted array

    printf("Printing sorted array\n");

    for ( i = 0; i < length; i++)
    {
        printf("A[%d] = %d\n",i,array[i]);
    }
}