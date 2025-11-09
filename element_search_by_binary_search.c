// WAP to search an element in an array using binary search techniques.

#include <stdio.h>

void main()
{
    int size, i, beg, end, mid, key,found, firstIndexOfKey;

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

    // taking key element

    printf("Enter the element to search or key element : ");
    scanf("%d",&key);

    // searching for key by binary search

    beg = 0;
    end = size-1;
    found = 1;

    while (beg<=end)
    {
        mid = (beg+end) / 2;
        if (array[mid] == key)
        {
            printf("Index of %d is %d\n",key, mid);
            found = 0;
            i=1;
            while (array[mid] == array[mid +i] || array[mid] == array[mid-i])
            {
                if (array[mid] == array[mid +i])
                {
                    printf("Index of another %d is %d\n",key, mid+i);
                }
                if (array[mid] == array[mid-i])
                {
                    printf("Index of another %d is %d\n",key,mid-i);
                }
                i++;
            }
            break;
        }
        else if (array[mid] > key)
        {
            end = mid-1;
        }
        else if(array[mid] < key)
        {
            beg = mid +1;
        }
    }
    
    // if key is not found in array
    if (found)
    {
        printf("The %d is not found in the array ",key);
    }
}