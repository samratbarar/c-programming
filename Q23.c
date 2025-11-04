// WAP to find the minimum and maximum element of the array.

# include <stdio.h>
# include <limits.h>

void main()
{
    int num, i, max, min;

    printf("Enter number of elements : ");
    scanf("%d",&num);

    int Array[num];

    max = INT_MIN;
    min = INT_MAX;

    printf("Enter the elements :\n ");
    for ( i = 0; i < num; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&Array[i]);

        if (Array[i] < min)
        {
            min = Array[i];
        }

        if (Array[i] > max)
        {
            max = Array[i];
        }
    }

    printf("The minimum element = %d and maximum element = %d ", min, max);
}