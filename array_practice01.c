/*
WAP to read n elements using 1D array and find largest and second largest of the array.
Swap these two elements and print array.
*/
# include <stdio.h>
# include <limits.h>

void main()
{
    int n, i, largest, secondLargest, indexOfLargest, indexOfsecondLargest, temp;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int Array[n];

    largest = INT_MIN;
    secondLargest = INT_MIN;

    for ( i = 0; i < n; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&Array[i]);

        if (Array[i] > largest)
        {
            largest = Array[i];
            indexOfLargest = i;
        }
    }

    for ( i = 0; i < n; i++)
    {
        if (secondLargest < Array[i] && Array[i] != largest)
        {
            secondLargest = Array[i];
            indexOfsecondLargest = i;
        }
        
    }
    
    printf("Largest = %d and second largest = %d \n",largest, secondLargest);

    temp = Array[indexOfLargest];
    Array[indexOfLargest] = Array[indexOfsecondLargest];
    Array[indexOfsecondLargest] = temp;

    for ( i = 0; i < n; i++)
    {
        printf("A[%d] = %d \n",i, Array[i]);
    }  
}