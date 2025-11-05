// WAP to search an element in a array using Linear Search

# include <stdio.h>

void main()
{
    int numberOfElement, number, i;

    printf("Enter the number of elements : ");
    scanf("%d",&numberOfElement);

    int Array[numberOfElement];

    printf("Enter elements : \n");

    for ( i = 0; i < numberOfElement; i++)
    {
        printf("A[%d] : ",i);
        scanf("%d",&Array[i]);
    }
    
    printf("Enter the number to search in array : ");
    scanf("%d",&number);

    for ( i = 0; i < numberOfElement; i++)
    {
        if (number == Array[i])
        {
            printf("The given is at index = %d\n ",i);
        }
    }
    
}