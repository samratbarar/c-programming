// WAP that simply takes elements of the array from the user and finds the sum of these elements.

#include<stdio.h>

void main()
{
    int num, sum; 

    // Taking size of the array 
    printf("Enter the number of elements : ");
    scanf("%d",&num);

    int Array[num];

    // Taking input array and adding the elements of the array.
    sum = 0;

    printf("Enter the elements : \n");

    for (int i = 0; i < num; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&Array[i]);

        sum += Array[i];
    }

    // Printing the sum of the array elements.
    printf("The sum of array elements is %d ",sum);
}