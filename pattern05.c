/*
WAP to print pattern    1
                       121
                      12321
                     1234321
                    123454321
*/
#include <stdio.h>
void main()
{
    int height, i, j, k, reverseCountingNumber;

    printf("Enter the height of pattern ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= height-i; j++)
        {
            printf(" ");
        }

        reverseCountingNumber = i-1;

        for (j = 1; j <= 2*i-1 ; j++)
        {
            if (j <= (2*i-1)/2 + 1)
            {
                printf("%d",k);
                k += 1;
            }

            else
            {
                printf("%d",reverseCountingNumber);
                reverseCountingNumber -= 1;

            }
        }
        printf("\n");
    }
}