/* 
WAP that inputs two arrays and saves sum of corresponding elements of these arrays
in a third array and prints them.
*/

# include <stdio.h>

void main()
{
    int num, i, j;

    printf("Enter the number of elements : ");
    scanf("%d",&num);

    int firstArray[num], secondArray[num], resultantArray[num];

    for ( i = 0; i < num; i++)
    {
        printf("firstArray[%d] : ",i);
        scanf("%d",&firstArray[i]);
        
        printf("SecondArray[%d] : ",i);
        scanf("%d",&secondArray[i]);

        resultantArray[i] = firstArray[i] + secondArray[i];
    }

    for ( i = 0; i < num; i++)
    {
        printf("Resultant Array[%d] = %d \n",i,resultantArray[i]);
    }  
}