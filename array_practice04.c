// WAP to delete a number in array at index i.





// incomplete code 





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
    
    // Taking number which is required to delete and at what position.
    printf("Enter the number which you want to delete in array : ");
    scanf("%d", &num);

    printf("Enter the index at which you want to delete number in array : ");
    scanf("%d", &index);

    // index is correct or not 
    if (index < size && index >= 0) {
        // printing new array after deleting
        for (int i = 0; i < size; i++)
        {
            if (i == index) {
                continue;
            }
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