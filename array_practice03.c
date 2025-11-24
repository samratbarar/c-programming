// WAP to insert a number in array at index i.

#include <stdio.h>

void main()
{
    int index, size, num, choice;

    // Taking size of the array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int Array[size];

    // Taking input array
    printf("Enter the elements : \n");

    for (int i = 0; i < size; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &Array[i]);
    }

    rePerform :

    // Taking number which is required to insert and at what position.
    printf("Enter the number which you want to insert in array : ");
    scanf("%d", &num);

    printf("Enter the index at which you want to insert number in array : ");
    scanf("%d", &index);

    // index is correct or not 
    if (index < size && index >= 0) {
        // inserting the number
        Array[index] = num;

        // printing new array after inserting
        for (int i = 0; i < size; i++)
        {
            printf("A[%d] : %d\n", i, Array[i]);
        }
    }
    else {
        printf("The index given is not correct\n");
        printf("if you want to re enter the index again \n");
        printf("Firstly enter 1 for yes and 0 for no");
        scanf("%d",&choice);
    } 
    if(choice) {
        goto rePerform;
    }
}