// WAP to search an element in a array using Linear Search

#include <stdio.h>

void main()
{
    int numberOfElement, number, i;

    printf("Enter the number of elements : ");
    scanf("%d", &numberOfElement);

    int Array[numberOfElement + 1];

    printf("Enter elements : \n");

    for (i = 0; i < numberOfElement; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &Array[i]);
    }

    Array[numberOfElement + 1] = 1;

    printf("Enter the number to search in array : ");
    scanf("%d", &number);

    for (i = 0; i < numberOfElement; i++)
    {
        if (number == Array[i])
        {
            printf("%d is at index = %d\n", number, i);
            Array[numberOfElement + 1] = 0;
        }
    }
    if (Array[numberOfElement+1] == 1)
    {
        printf("%d is not found in the array ", number);
    }
}