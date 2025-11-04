// WAP that simply takes elements of the array from the user and finds the sum of these elements.

#include<stdio.h>

void main()
{
    int num, sum; 

    printf("Enter the number of elements : ");
    scanf("%d",&num);

    int Array[num];

    sum = 0;

    printf("Enter the elements : \n");

    for (int i = 0; i < num; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&Array[i]);

        sum += Array[i];
    }

    printf("The sum of array elements is %d ",sum);
}