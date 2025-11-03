/*
WAP to print pattern ****
                     ***
                     **
                     *
*/
# include <stdio.h>

void main()
{
    int height;

    printf("Enter the height and width of pattern :");
    scanf("%d",&height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height-i ; j++)
        {
            printf("*");
        }

        printf("\n");

    }
}