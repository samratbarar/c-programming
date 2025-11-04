/*
WAP to read n elements using 1D array and find largest and second largest of the array.
Swap these two elements and print array.
*/
# include <stdio.h>
# include <limits.h>

void main()
{
    int num, i, largest, secondLargest, indexOfLargest, indexOfSecondLargest, temp;

    printf("Enter the number of elements : ");
    scanf("%d",&num);

    int Array[num];

    largest = INT_MIN;
    secondLargest = INT_MIN;

    printf("Enter the elements : \n");

    for ( i = 0; i < num; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&Array[i]);

        if (Array[i] > largest)
        {
            largest = Array[i];
            indexOfLargest = i;
        }
    }

    for ( i = 0; i < num; i++)
    {
        if (secondLargest < Array[i] && Array[i] != largest)
        {
            secondLargest = Array[i];
            indexOfSecondLargest = i;
        }
        
    }
    
    printf("Largest = %d and second largest = %d \n",largest, secondLargest);

    temp = Array[indexOfLargest];
    Array[indexOfLargest] = Array[indexOfSecondLargest];
    Array[indexOfSecondLargest] = temp;

    for ( i = 0; i < num; i++)
    {
        printf("A[%d] : %d \n",i, Array[i]);
    }  
}