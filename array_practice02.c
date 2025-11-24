// WAP that simply takes elements of the array from the user and finds the sum of even and odd elements.

#include <stdio.h>

void main()
{
    int num, sumOfEven, sumOfOdd;

    // Taking size of the array
    printf("Enter the number of elements : ");
    scanf("%d", &num);

    int Array[num];

    // Taking input array and adding the elements of the array.
    sumOfEven = 0;
    sumOfOdd = 0;

    printf("Enter the elements : \n");

    for (int i = 0; i < num; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &Array[i]);

        if (Array[i]%2 == 0) {
            sumOfEven += Array[i];
        }
        else {
            sumOfOdd += Array[i];
        }
    }

    // Printing the sum of the array elements.
    printf("The sum of array elements is %d\n", sumOfEven);
    printf("The sum of array elements is %d\n", sumOfOdd);
}