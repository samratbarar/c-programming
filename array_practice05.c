// WAP to print the center element of the array.

#include <stdio.h>

void main() {
    int length, i;

    printf("Enter the length of the array : ");
    scanf("%d",&length);

    int array[length];

    printf("Enter the elements\n");

    for ( i = 0; i < length; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d",&array[i]);
    }

    if (length % 2 == 0)
    {
        printf("First center element = %d\nSecond center element = %d\n", array[length / 2 - 1], array[length / 2]);
    }
    else {
        printf("center element = %d\n",array[length / 2]);
    }
    
}